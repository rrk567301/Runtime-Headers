@class NSString, TRIClient, TRIExperimentIdentifiers;

@interface TLKTrialManager : NSObject

@property BOOL snippetModernizationEnabled;
@property BOOL biggerSuggestionsLayoutEnabled;
@property long long zkwOverrideValue;
@property (retain, nonatomic) NSString *namespace;
@property (retain, nonatomic) TRIClient *client;
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;

+ (id)sharedManager;

- (void)refresh;
- (id)init;
- (void).cxx_destruct;

@end
