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
- (void).cxx_destruct;
- (id)init;

@end
