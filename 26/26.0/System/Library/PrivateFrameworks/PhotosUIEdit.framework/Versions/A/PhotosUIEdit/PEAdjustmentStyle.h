@class NSString;

@interface PEAdjustmentStyle : NSObject <PEAdjustment>

@property (retain, nonatomic) NSString *cast;
@property (nonatomic) double tone;
@property (nonatomic) double color;
@property (nonatomic) double intensity;
@property (readonly, nonatomic) long long category;

- (void).cxx_destruct;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithCast:(id)a0;
- (id)initWithCast:(id)a0 tone:(double)a1 color:(double)a2 intensity:(double)a3;

@end
