@class NSString, NSMutableDictionary, hlDriver, NSArray;

@interface Spectro : NSObject

@property (retain) hlDriver *CalibriteDeviceReference;
@property (retain) NSString *devicePath;
@property int deviceTypeInt;
@property (retain) NSString *deviceManufacturerString;
@property (retain) NSString *deviceModelString;
@property int fileDescriptor;
@property (retain) NSString *serialNumber;
@property (retain) NSString *firmwareVersion;
@property (retain) NSString *deviceName;
@property (retain) NSString *infoBlockID;
@property (retain) NSMutableDictionary *savedConfiguration;
@property (retain) NSMutableDictionary *setConfiguration;
@property long long vendorID;
@property long long productID;
@property double accumulatedPRApertureDeltaTime;
@property unsigned char preferWidestAperture;
@property BOOL setupOK;
@property int resultInt;
@property unsigned char greaterThan01Aperture;
@property (retain) NSString *resultStr;
@property (retain) NSArray *resultArray;
@property BOOL isClosing;
@property int deviceSubType;
@property (retain) NSString *colorimeterMode;
@property (retain) NSMutableDictionary *colorimeterMatrixDict;
@property (retain) NSString *colorimeterActiveMatrix;

+ (id)connectedDevices;
+ (id)availableCustomCalibrationTypes;
+ (id)connectedDevicesWithDisplayType:(id)a0;

- (id)initWithPath:(id)a0;
- (void)setup;
- (void).cxx_destruct;
- (int)close;
- (void)commandCR:(id)a0 wait:(int)a1;
- (void)fakeMeasurement;
- (BOOL)openDevicePath:(id)a0;
- (BOOL)PRBandwidthAndApertureOK;
- (void)commandPR:(id)a0 wait:(int)a1;
- (void)setupCR;
- (void)setupPR;
- (id)XYZtoLxy:(id)a0;
- (id)convertStringsToDoubles:(id)a0;
- (id)getSpectroMatrixDict:(id)a0;
- (id)initCalibrite;
- (id)initCalibriteWithDisplayType:(id)a0;
- (BOOL)isValidCustomCalibrationForDisplayType:(id)a0;
- (BOOL)largerThan01Aper;
- (BOOL)loadEDRFileWithPath:(id)a0;
- (id)measureLxy1931;
- (id)measureLxy1931andReturnDict;
- (BOOL)measureLxy1931withDict:(id *)a0;
- (int)prApertureDelta:(int)a0;
- (id)processCRSpectrumData:(id)a0;
- (BOOL)restoreCR;
- (BOOL)restorePR;
- (BOOL)setActiveMatrix:(id)a0;

@end
