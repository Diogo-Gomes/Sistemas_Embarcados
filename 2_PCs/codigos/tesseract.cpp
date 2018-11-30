//Arquivo salvo em tesseract.cpp
// CARREGA IMAGEM E EXPOE NA JANELA
#include<stdio.h>
#include<stdlib.h>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
using namespace cv;
using namespace std;
int main( int argc, char** argv )
{
    String imageName( "identidade.jpg" ); // BUSCAR A IMAGEM
    if( argc > 1)
    {
        imageName = argv[1];
    }
    Mat image;
    image = imread( imageName, IMREAD_GRAYSCALE ); // LER A IMAGEM EM ESCALAS DE CINZA
    if( image.empty() )                      // CHECA SE O ARQUIVO É VÁLIDO
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
// Especificar a localização da ROI 
//-------------------------------------------------------------
// roi_1 é o corte do numero de identidade
        cv::Rect roi_1 = cv::Rect(101, 20, 130, 30);
// roi_2 é o corte do nome
        cv::Rect roi_2 = cv::Rect(10, 70, 431, 40);
// roi_3 é o corte dos nomes dos pais do cidadao
        cv::Rect roi_3 = cv::Rect(10, 140, 331, 55);
// roi_4 é o corte da data de nascimento
        cv::Rect roi_4 = cv::Rect(465, 210, 140, 30);
// roi_5 é o corte do CPF
        cv::Rect roi_5 = cv::Rect(10, 332, 182, 30);
//-------------------------------------------------------------------------------
// Criar uma nova imagem a partir da ROI setada na imagem original:
        cv::Mat sub_img1 = image(roi_1);
        cv::Mat sub_img2 = image(roi_2);
        cv::Mat sub_img3 = image(roi_3);
        cv::Mat sub_img4 = image(roi_4);
        cv::Mat sub_img5 = image(roi_5);

//mostrar as imagens cortadas na janela 
//      cv::imshow("crop1", sub_img1);
//      cv::imshow("crop2", sub_img2);
//      cv::imshow("crop3", sub_img3);
//      cv::imshow("crop4", sub_img4);
//      cv::imshow("crop5", sub_img5);
//      cv::waitKey(0);

// SALVAR OS CORTES COMO IMAGENS
        cv::imwrite("iden.jpg", sub_img1);
        cv::imwrite("nome.jpg", sub_img2);
        cv::imwrite("nome_pais.jpg", sub_img3);
        cv::imwrite("data_nasc.jpg", sub_img4);
        cv::imwrite("cpf.jpg", sub_img5);
//---------------------------------------------------------------
// APLICANDO O TESSERACT
        system("tesseract iden.jpg dados1");
        printf("\n");
        system("cat dados1.txt");

        system("tesseract nome.jpg dados2");
        printf("\n");
        system("cat dados2.txt");

        system("tesseract nome_pais.jpg dados3");
        printf("\n");
        system("cat dados3.txt");

        system("tesseract data_nasc.jpg dados4");
        printf("\n");
        system("cat dados4.txt");

        system("tesseract cpf.jpg dados5");
        printf("\n");
        system("cat dados5.txt");


        return 0;
}
//Rect region_of_interest = Rect(x, y, w, h);
//Mat image_roi = image(region_of_interest);




