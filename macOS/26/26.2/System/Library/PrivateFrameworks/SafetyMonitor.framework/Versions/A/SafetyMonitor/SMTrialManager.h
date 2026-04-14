@class NSString, TRIClient;

@interface SMTrialManager : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSString *namespaceName;

- (void)refresh;
- (void).cxx_destruct;
- (id)levelForFactor:(id)a0;
- (id)init;
- (double)doubleValueForFactor:(id)a0;

@end
