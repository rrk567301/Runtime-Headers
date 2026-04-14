@class NSArray;

@interface PILABCurveConfiguration : NSObject

@property (nonatomic) BOOL isEnergySaving;
@property (retain) NSArray *lut;

- (void)dealloc;
- (id)description;
- (BOOL)hasValidLUT;

@end
