@class IECSInterface, NSNumber, NSString;

@interface iecsUpdater : NSObject <flasher> {
    IECSInterface *fInterface;
    NSNumber *device_id;
    NSString *uuid;
    BOOL verbose;
    BOOL updated;
    BOOL retriesEnabled;
    BOOL gaidEnabled;
    NSString *upcomingFirmwareVersionStash;
}

- (id)name;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(unsigned int)a0;
- (id)uuid;
- (id)version;
- (id)initWithInterface:(id)a0;
- (id)rid;
- (BOOL)setVerbose:(BOOL)a0;
- (id)optkeyshash;
- (BOOL)enableDisableFirmwareUpdateMode:(BOOL)a0;
- (BOOL)enableDisableRetries:(BOOL)a0;
- (BOOL)enableDisableGAID:(BOOL)a0;
- (BOOL)stashFirmwareVersionInFile:(id)a0;
- (BOOL)query:(id)a0 andErrorResponse:(id *)a1;
- (BOOL)flash:(id)a0 andErrorResponse:(id *)a1;
- (BOOL)isDone:(id *)a0;
- (id)initForSimulation;
- (BOOL)getAceHeaderOffset:(const char *)a0 ofSize:(unsigned long long)a1 intoRidgeOffset:(unsigned int *)a2 intoAceOffset:(unsigned int *)a3 andLength:(unsigned int *)a4 signature:(id)a5 alternateSignature:(id)a6 andDeviceType:(unsigned int *)a7 andVersion:(unsigned int *)a8 andAppConfigVersion:(unsigned short *)a9 andNextHeaderOffset:(unsigned int *)a10;
- (int)attemptIECSCommand:(unsigned int)a0 flags:(unsigned int)a1 withData:(char *)a2 dataLength:(unsigned short)a3 retData:(char *)a4 retDataLength:(unsigned short)a5 timeout:(unsigned int)a6 andErrorResponse:(id *)a7;
- (id)getHCPMinfoImpl:(id *)a0;
- (id)getHCPMinfo:(id *)a0;
- (BOOL)isAllowableBCDByte:(unsigned char)a0;
- (BOOL)isHCPMversionFormat:(unsigned int)a0;
- (BOOL)flashHCPM:(id)a0 andErrorResponse:(id *)a1;

@end
