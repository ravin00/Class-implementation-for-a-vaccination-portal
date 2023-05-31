#pragma once
   #include<iostream>
   using namespace std;
   class VaccinationCenter
   {
   private:
          int center_id;
          string center_name;
          string address;
          string phone;
          string email;
          string contact_person_name;
          string contact_person_phone;
          float latitude;
          float longitude;
public:
void setVaccinationCenterDetails(int cID, string cName, string cAddress,
string cPhone, string cEmail, string cPersonName, string cPersonPhone, float cLatitude, float cLongitude);
          void displayVaccinationCenterDetails();
   };
