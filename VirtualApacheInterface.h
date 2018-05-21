//
// Created by Rodolfo Galvan on 5/20/2018.
//

#ifndef VIRTUAL_APACHE_VIRTUALAPACHEINTERFACE_H
#define VIRTUAL_APACHE_VIRTUALAPACHEINTERFACE_H
// Abstract Class Declaration
class VirtualApacheInterface{
    public:
        /* Sets the admin's email
         * Precondition: User input email
         * Postcondition: returns boolean*/
        virtual bool setEmail(String em) const = 0;

        /* Pushes domain to vector array
         * Precondition: user input domain
         * Postcondition: returns boolean*/
        virtual bool setDomain(String dm) = 0;

        /* Makes configuration file
         * Precondition: email & domain are set
         * Postcodition: Returns boolean*/
        virtual bool mkConfig() const = 0;

        /* Enables sites on apache2
         * Precondition: email & domain are set, mkConfig == true
         * Postcondition: returns boolean*/
        virtual bool enableSites() const = 0;

        /* Restart Apache2
         * Precondition: enableSites == true
         * Postcondition: boolean*/
        virtual bool restartApache() const = 0;

        /* Virtual Destructor*/
        virtual ~Apachify(){}
};
#endif //VIRTUAL_APACHE_VIRTUALAPACHEINTERFACE_H
