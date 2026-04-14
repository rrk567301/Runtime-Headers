@interface PowerUITTEPredResults : NSObject

@property (nonatomic) float averagePower;
@property (nonatomic) float confidenceWidth;
@property (nonatomic) long long ttePreResultsStatus;

- (id)init;
- (BOOL)isValid;
- (void)loadResultsWithDefaults:(id)a0;

@end
