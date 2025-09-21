@protocol CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;

@interface CNSuggestedContactStore : CNContactStore

@property (retain, nonatomic) id<SGSuggestionsServiceContactsProtocol> suggestionService;
@property (retain, nonatomic) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;

+ (id)storeIdentifier;
+ (id)os_log;
+ (char)isSuggestionsSupported;
+ (id)storeInfoClasses;

- (id)init;
- (void).cxx_destruct;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1 error:(id *)a2;
- (char)executeSaveRequest:(id)a0 error:(id *)a1;
- (char)enumerateContactsAndMatchInfoWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (char)_processSuggestions:(id)a0 error:(id *)a1 withBlock:(id /* block */)a2;
- (char)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (id)initWithSuggestionsService:(id)a0 siriIntelligenceSettings:(id)a1;
- (id)originForSuggestion:(id)a0 error:(id *)a1;
- (id)requestAccessForEntityType:(long long)a0;
- (char)shouldLogContactsAccess;

@end
