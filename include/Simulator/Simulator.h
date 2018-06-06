Uzupełnić istniejący już plik o takiej nazwie o niezbędne konstruktory / metody

    /// Return robot pointer
        /*
         * Checks if robot is configured and loaded
         */
        virtual bool checkRobot()=0;
        /*
         * Sets position for specified joint
         */
        virtual void setPosition(int legNo, int jointNo, float_type angle) = 0;              jest metoda SetRobotPosition - można przeciążyć ?
        /*
         * Gets angle for specified joint
         */
        virtual void readPosition(int legNo, int jointNo, float_type& angle) = 0;           
        
        virtual vector<Mat34> getRobotState()=0;