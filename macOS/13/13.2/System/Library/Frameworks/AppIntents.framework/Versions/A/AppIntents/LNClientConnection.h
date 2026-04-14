@class LNAppContext, NSString, NSXPCConnection, NSMutableArray;

@interface LNClientConnection : NSObject <LNConnectionHostInterface>

@property (readonly, nonatomic) NSMutableArray *executorRequests;
@property (readonly, nonatomic) LNAppContext *appContext;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { unsigned int x0[8]; } *)currentAuditToken;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchMetadataWithCompletionHandler:(id /* block */)a0;
- (void)fetchViewEntitiesWithInteractionIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchViewActionsWithCompletionHandler:(id /* block */)a0;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)a0 forEntityIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionForAutoShortcutPhrase:(id)a0 completionHandler:(id /* block */)a1;
- (void)performPropertyQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedResultsQueryWithEntityType:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)a0 suggestionContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDisplayRepresentationForActions:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionOutputValueWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOptionsForActionMetadata:(id)a0 parameterMetadata:(id)a1 searchTerm:(id)a2 localeIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchOptionsDefaultValuesForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchParameterOptionDefaultValueForActionMetadata:(id)a0 parameterIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)performAction:(id)a0 options:(id)a1 executor:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchActionAppContextFromAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)getListenerEndpointWithCompletionHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 appContext:(id)a1;

@end
