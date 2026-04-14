@class ICScannerImageRep, NSArray, NSMutableDictionary, NSMutableIndexSet, ICScannerDevice;

@interface ICScannerFunctionalUnitProps : NSObject {
    struct CGDataProvider { } *_overviewImageDataProvider;
}

@property unsigned long long pixelDataType;
@property (retain) NSMutableIndexSet *supportedBitDepths;
@property unsigned long long bitDepth;
@property (retain) NSMutableIndexSet *supportedMeasurementUnits;
@property unsigned long long measurementUnit;
@property unsigned long long measurementUnitPrivate;
@property unsigned long long nativeXResolution;
@property unsigned long long nativeYResolution;
@property (retain) NSMutableIndexSet *supportedResolutions;
@property (retain) NSMutableIndexSet *preferredResolutions;
@property unsigned long long resolution;
@property (retain) NSMutableIndexSet *supportedScaleFactors;
@property (retain) NSMutableIndexSet *preferredScaleFactors;
@property unsigned long long scaleFactor;
@property (retain) NSArray *templates;
@property (retain) NSArray *vendorFeatures;
@property (readonly) NSMutableDictionary *currentSettings;
@property BOOL acceptsThresholdForBlackAndWhiteScanning;
@property BOOL usesThresholdForBlackAndWhiteScanning;
@property unsigned char defaultThresholdForBlackAndWhiteScanning;
@property unsigned char thresholdForBlackAndWhiteScanning;
@property unsigned long long state;
@property (retain) ICScannerImageRep *overviewImageBufferRep;
@property struct CGImage { } *overviewImage;
@property struct CGImage { } *grayOverviewImage;
@property unsigned long long overviewResolution;
@property struct CGColorSpace { } *grayColorSpace;
@property struct CGSize { double width; double height; } physicalSizeInInches;
@property struct CGSize { double width; double height; } minimumScanSizeInInches;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanArea;
@property unsigned long long scanAreaOrientation;
@property double scanProgressPercentDone;
@property ICScannerDevice *scanner;
@property unsigned char backgroundGrayValue;
@property (retain) NSMutableDictionary *scanParams;
@property unsigned long long templateMeasurementUnit;
@property BOOL supportsProgressNotificationsWithScanData;
@property BOOL useOverviewImageAsFinalImage;

- (void)dealloc;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;

@end
