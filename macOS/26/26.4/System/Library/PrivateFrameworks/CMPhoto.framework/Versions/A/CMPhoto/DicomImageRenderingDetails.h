@class NSArray, NSString;

@interface DicomImageRenderingDetails : NSObject

@property (retain, nonatomic) NSArray *rgbLookupTableDescriptors;
@property (retain, nonatomic) NSArray *rgbLookupTablesStorage;
@property (nonatomic) double rescaleSlope;
@property (nonatomic) double rescaleIntercept;
@property (nonatomic) double windowCenter;
@property (nonatomic) double windowWidth;
@property (retain, nonatomic) NSString *voiFunction;

- (void).cxx_destruct;
- (id)init;
- (const unsigned short *)_getLookupTableForChannel:(int)a0;

@end
