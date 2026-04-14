@class DicomImageRenderingDetails, NSString, NSArray, NSData, VegaSwiftDataSet;

@interface DicomImageDetails : NSObject

@property (retain, nonatomic) VegaSwiftDataSet *vegaDataSet;
@property (retain, nonatomic) NSString *transferSyntaxUID;
@property (retain, nonatomic) NSArray *pixelDataFragments;
@property (nonatomic) unsigned short columns;
@property (nonatomic) unsigned short rows;
@property (nonatomic) unsigned short samplesPerPixel;
@property (retain, nonatomic) NSString *photometricInterpretation;
@property (nonatomic) unsigned short bitsAllocated;
@property (nonatomic) unsigned short bitsStored;
@property (nonatomic) unsigned short highBit;
@property (retain, nonatomic) NSArray *smallestLargestPixelValue;
@property (nonatomic) unsigned short pixelRepresentation;
@property (retain, nonatomic) NSData *iccProfile;
@property (retain, nonatomic) NSString *colorSpace;
@property (retain, nonatomic) DicomImageRenderingDetails *renderDetails;
@property (nonatomic) unsigned char isAuxImage;
@property (retain, nonatomic) NSString *auxType;
@property (nonatomic) unsigned int auxNativePixelFormat;

- (void).cxx_destruct;
- (id)init;

@end
