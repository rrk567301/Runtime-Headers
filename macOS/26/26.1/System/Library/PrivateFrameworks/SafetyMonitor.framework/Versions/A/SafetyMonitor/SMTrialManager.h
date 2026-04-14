@class NSString, TRIClient;

@interface SMTrialManager : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSString *namespaceName;

- (void)refresh;
- (id)levelForFactor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)doubleValueForFactor:(id)a0;

@end
