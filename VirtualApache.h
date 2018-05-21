//
// Created by Rodolfo Galvan on 5/20/2018.
//

#ifndef VIRTUAL_APACHE_VIRTUALAPACHE_H
#define VIRTUAL_APACHE_VIRTUALAPACHE_H

#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "VirtualApacheInterface.h"

class Apachify : VirtualApacheInterface{

    private:
        /*
        * --------------------------
        * Protected Utility Methods & Variables:
        * --------------------------
        *
        * */
        String email = '';
        vector<String> domains;
    public:
        Apachify();                             //Default Constructor
        bool setEmail(String em) const;                        //Set Email
        bool setDomain(String dm);                       //set Domain
        bool mkConfig() const;           //Creates Virtual Hosting Configuration File
        bool enableSites() const;            //enables each site
        bool restartApache() const;           // restart apache2
};

#endif //VIRTUAL_APACHE_VIRTUALAPACHE_H
