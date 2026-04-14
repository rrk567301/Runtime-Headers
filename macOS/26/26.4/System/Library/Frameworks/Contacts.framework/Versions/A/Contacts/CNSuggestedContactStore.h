@protocol CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;

@interface CNSuggestedContactStore : CNContactStore

@property (retain, nonatomic) id<SGSuggestionsServiceContactsProtocol> suggestionService;
@property (retain, nonatomic) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;

+ (id)storeIdentifier;
+ (id)os_log;
+ (BOOL)isSuggestionsSupported;
+ (id)storeInfoClasses;

- (id)originForSuggestion:(id)a0 error:(id *)a1;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)requestAccessForEntityType:(long long)a0;
- (BOOL)shouldLogContactsAccess;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)_processSuggestions:(id)a0 error:(id *)a1 withBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithSuggestionsService:(id)a0 siriIntelligenceSettings:(id)a1;
- (id)init;

@end
