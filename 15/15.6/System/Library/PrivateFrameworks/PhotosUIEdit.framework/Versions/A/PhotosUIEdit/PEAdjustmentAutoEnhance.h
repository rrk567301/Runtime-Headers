@interface PEAdjustmentAutoEnhance : NSObject <PEAdjustment>

@property (nonatomic) char enabled;
@property (readonly, nonatomic) long long category;

- (id)initWithEnabled:(char)a0;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;

@end
