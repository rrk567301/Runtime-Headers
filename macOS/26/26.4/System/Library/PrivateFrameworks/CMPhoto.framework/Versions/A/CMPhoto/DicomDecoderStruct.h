@class NSString, DicomImageDetails, NSArray, VegaSwiftDataSet;

@interface DicomDecoderStruct : NSObject

@property (nonatomic) BOOL parsed;
@property (nonatomic) struct __CFAllocator { } *allocator;
@property (retain, nonatomic) VegaSwiftDataSet *vegaDataSet;
@property (retain, nonatomic) NSString *modality;
@property (nonatomic) unsigned char isLittleEndian;
@property (retain, nonatomic) DicomImageDetails *mainImage;
@property (nonatomic) unsigned short numberOfFrames;
@property (nonatomic) unsigned short planarConfiguration;
@property (retain, nonatomic) NSArray *auxImages;

- (void).cxx_destruct;
- (id)init;

@end
