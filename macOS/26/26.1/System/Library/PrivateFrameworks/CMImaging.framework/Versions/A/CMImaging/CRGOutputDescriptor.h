@class CRGDimensions, NSString, CRGPixelFormat, CRGOutputConstraints;

@interface CRGOutputDescriptor : NSObject <CRGOutputDescriptor>

@property (retain, nonatomic) NSString *outputName;
@property (retain, nonatomic) CRGDimensions *dimensions;
@property (retain, nonatomic) CRGPixelFormat *pixelFormat;
@property (retain, nonatomic) CRGOutputConstraints *constraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)outputName:(id)a0 dimensions:(id)a1 pixelFormat:(id)a2;
+ (id)outputName:(id)a0 dimensions:(id)a1 pixelFormat:(id)a2 constraints:(id)a3;

- (void).cxx_destruct;
- (id)initWithOutputName:(id)a0 dimensions:(id)a1 pixelFormat:(id)a2 constraints:(id)a3;

@end
