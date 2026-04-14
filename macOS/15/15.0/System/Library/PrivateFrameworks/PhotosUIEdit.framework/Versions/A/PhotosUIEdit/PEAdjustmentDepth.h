@interface PEAdjustmentDepth : NSObject <PEAdjustment>

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long category;

+ (id)_error:(long long)a0 description:(id)a1;

- (id)initWithEnabled:(BOOL)a0;
- (void)applyToCompositionController:(id)a0 valuesCalculator:(id)a1 asset:(id)a2 livePortraitBehaviorDelegate:(id)a3 completionHandler:(id /* block */)a4;

@end
