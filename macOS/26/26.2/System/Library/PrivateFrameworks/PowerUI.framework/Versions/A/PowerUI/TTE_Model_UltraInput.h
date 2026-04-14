@class NSSet;

@interface TTE_Model_UltraInput : NSObject <MLFeatureProvider>

@property (nonatomic) double x1;
@property (nonatomic) double x2;
@property (nonatomic) double x3;
@property (nonatomic) double x4;
@property (nonatomic) double x5;
@property (nonatomic) double x6;
@property (nonatomic) double x7;
@property (nonatomic) double x8;
@property (nonatomic) double x9;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithX1:(double)a0 x2:(double)a1 x3:(double)a2 x4:(double)a3 x5:(double)a4 x6:(double)a5 x7:(double)a6 x8:(double)a7 x9:(double)a8;

@end
