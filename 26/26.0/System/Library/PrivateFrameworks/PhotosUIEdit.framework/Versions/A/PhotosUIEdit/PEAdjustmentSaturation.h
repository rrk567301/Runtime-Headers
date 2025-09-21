@interface PEAdjustmentSaturation : NSObject <PEAdjustment>

@property (copy, nonatomic) id /* block */ modifier;
@property (readonly, nonatomic) long long category;

- (id)initWithModifier:(id /* block */)a0;
- (void).cxx_destruct;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;

@end
