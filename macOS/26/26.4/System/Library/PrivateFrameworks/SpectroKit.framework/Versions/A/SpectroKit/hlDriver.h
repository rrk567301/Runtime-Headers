@class Colorimeter, NSArray, I1D3InternalEPROM, NSData, I1D3ExternalEPROM, i1d3DriverComms, EDRManager;

@interface hlDriver : NSObject

@property (retain, nonatomic) i1d3DriverComms *comms;
@property (retain, nonatomic) NSData *productKey;
@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) I1D3ExternalEPROM *externalEprom;
@property (retain, nonatomic) I1D3InternalEPROM *internalEprom;
@property (retain, nonatomic) EDRManager *edrManager;
@property (retain, nonatomic) Colorimeter *colorimeter;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) int timeout;
@property (nonatomic) unsigned short backlightFreqSyncOption;
@property (nonatomic) unsigned short backlightFreqHz;
@property (nonatomic) unsigned short measurementMode;
@property (nonatomic) double integrationTimeSecs;
@property (copy, nonatomic) id /* block */ onDeviceRemoved;

+ (int)hlStatusFromDictionary:(id)a0;
+ (id)mergeDictionary:(id)a0 withError:(int)a1;
+ (id)translateWithException:(id)a0;

- (id)initialize;
- (id)destroy;
- (int)isAttached;
- (id)open;
- (int)isOpen;
- (id)deviceInfo;
- (id)serialNumber;
- (void).cxx_destruct;
- (id)init;
- (id)count;
- (id)close;
- (id)measure;
- (id)calibration;
- (id)setCalibration:(id)a0;
- (id)getDeviceName;
- (id)CIEValuesFromRGBRaw:(id)a0;
- (id)calibrationList;
- (void)validateConnect;
- (id)adjustForDarkregister:(id)a0;
- (id)diffuserPosition;
- (BOOL)i1d3SupportsAIOMode;
- (double)integrationTimeMachineTicks;
- (id)measureAIOMode;
- (id)measureAmbient;
- (id)measureAuto;
- (id)measureCRTAutoDark;
- (id)measurePeriodMode:(id)a0;
- (id)measureRawRGB;
- (void)onEDRSelectionChanged:(id)a0;
- (id)overrideDeviceDefaultsForVendorId:(unsigned long long)a0 withDeviceId:(unsigned long long)a1 withKey:(id)a2;
- (id)postProcessAIOAutoResults:(id)a0;
- (id)postProcessCRTAutoDarkResults:(id)a0;
- (id)readExternalEProm;
- (id)readInternalEProm;
- (id)setCalibrationFromBuffer:(id)a0;
- (id)setSupportFilePathWithPath:(id)a0;
- (id)toolkitVersion;

@end
