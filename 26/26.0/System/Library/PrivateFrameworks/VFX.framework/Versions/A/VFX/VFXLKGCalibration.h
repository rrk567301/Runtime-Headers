@class NSArray;

@interface VFXLKGCalibration : NSObject

@property (nonatomic) float pitch;
@property (nonatomic) float tilt;
@property (nonatomic) float center;
@property (nonatomic) float subp;
@property (nonatomic) float displayAspect;
@property (nonatomic) int ri;
@property (nonatomic) int bi;
@property (nonatomic) int screenWidth;
@property (nonatomic) int screenHeight;
@property (nonatomic) int cellPatternMode;
@property (nonatomic) int subpixels;
@property (copy, nonatomic) NSArray *subpixelData;
@property (nonatomic) BOOL invView;

- (void)dealloc;
- (id)init;

@end
