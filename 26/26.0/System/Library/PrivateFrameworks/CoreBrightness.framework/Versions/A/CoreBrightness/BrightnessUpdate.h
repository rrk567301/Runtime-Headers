@class NSNumber, NSArray;

@interface BrightnessUpdate : NSObject

@property unsigned long long ID;
@property double timestampOffset;
@property (retain, nonatomic) NSNumber *sdr;
@property (retain, nonatomic) NSNumber *headroom;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *potentialHeadroom;
@property (retain, nonatomic) NSNumber *referenceHeadroom;
@property (retain, nonatomic) NSNumber *adaptationScale;
@property (retain, nonatomic) NSNumber *ambient;
@property (retain, nonatomic) NSNumber *filteredAmbient;
@property (retain, nonatomic) NSNumber *contrastEnhancer;
@property (retain, nonatomic) NSNumber *lowAmbientAdaptation;
@property (retain, nonatomic) NSNumber *highAmbientAdaptation;
@property (retain, nonatomic) NSNumber *indicatorBrightness;
@property (retain, nonatomic) NSNumber *indicatorBrightnessLimit;
@property (retain, nonatomic) NSArray *whitePoint;

- (id)initWithUpdateData:(id)a0;

@end
