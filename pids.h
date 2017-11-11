#ifndef PIDS_H
#define PIDS_H

#include <QByteArray>

class PIDs
{
public:
    PIDs();

    QByteArray getMODE01CurrentData(){
        return MODE01;
    }

    QByteArray getMODE02FreezeFrameData(){
        return MODE02;
    }

    QByteArray getMODE03TROUBLECODES(){
        return MODE03;
    }

    QByteArray getMODE04ClrCodesAndStored(){
        return MODE04;
    }
    //Show pending Diagnostic Trouble Codes
    QByteArray getMODE07PendingCodes(){
        return MODE07;
    }

    QByteArray getMODE08ControlOnboardOps(){
        return MODE08;
    }

    QByteArray getMODE09VehicleInformation(){
        return MODE09;
    }

    QByteArray getMODE0APermanentCodes(){
        return MODE0A;
    }

    QByteArray getStatus_Since_DTC_Cleared(){
        return Status_Since_DTC_Cleared;
    }

    QByteArray getFreezeDTC(){
        return FreezeDTC;
    }

    QByteArray getFuelTankLevel(){
        return FuelTankLevel;
    }

    QByteArray getEngineLoad(){
        return EngineLoad;
    }

    QByteArray getEngineCoolantTemp(){
        return EngineCoolantTemp;
    }

    QByteArray getFuelPressure(){
        return FuelPressure;
    }

    QByteArray getIntakeManifoldAbsPressure(){
        return IntakeManifoldAbsPressure;
    }

    QByteArray getRPM(){
        return RPM;
    }

    QByteArray getSpeed(){
        return Speed;
    }

    QByteArray getIntakeAirTemp(){
        return IntakeAirTemp;
    }

    QByteArray getThrottlePosition(){
        return ThrottlePosition;
    }

    QByteArray getAuxStatus(){
        return AuxStatus;
    }


private:

    QByteArray MODE01;
    QByteArray MODE02;
    QByteArray MODE03;
    QByteArray MODE04;
    QByteArray MODE07;
    QByteArray MODE08;
    QByteArray MODE09;
    QByteArray MODE0A;

    QByteArray Status_Since_DTC_Cleared;
    QByteArray FreezeDTC;
    QByteArray FuelTankLevel;
    QByteArray EngineLoad;
    QByteArray EngineCoolantTemp;
    QByteArray FuelPressure;
    QByteArray IntakeManifoldAbsPressure;
    QByteArray RPM;
    QByteArray Speed;
    QByteArray IntakeAirTemp;
    QByteArray ThrottlePosition;
    QByteArray AuxStatus;

};

#endif // PIDS_H
