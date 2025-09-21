@class NSString, TRIClient, TRIExperimentIdentifiers;

@interface TLKTrialManager : NSObject

@property char snippetModernizationEnabled;
@property char biggerSuggestionsLayoutEnabled;
@property long long zkwOverrideValue;
@property (retain, nonatomic) NSString *namespace;
@property (retain, nonatomic) TRIClient *client;
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;

@end
