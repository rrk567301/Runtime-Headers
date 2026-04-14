@interface PowerUITTEPredResults : NSObject

@property (nonatomic) float averagePower;
@property (nonatomic) float confidenceWidth;
@property (nonatomic) long long ttePreResultsStatus;

- (BOOL)isValid;
- (id)init;
- (void)loadResultsWithDefaults:(id)a0;

@end
