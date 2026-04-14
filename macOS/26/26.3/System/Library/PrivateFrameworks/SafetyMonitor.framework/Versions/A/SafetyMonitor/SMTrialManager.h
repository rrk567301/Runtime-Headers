@class NSString, TRIClient;

@interface SMTrialManager : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSString *namespaceName;

- (void)refresh;
- (id)init;
- (void).cxx_destruct;
- (id)levelForFactor:(id)a0;
- (double)doubleValueForFactor:(id)a0;

@end
