@class NSString;

@interface PHConversation : PHAssetCollection

@property (readonly, nonatomic) NSString *conversationID;

+ (id)fetchType;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)managedEntityName;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchConversationsWithConversationIDs:(id)a0 options:(id)a1;
+ (id)fetchConversationsWithOptions:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
