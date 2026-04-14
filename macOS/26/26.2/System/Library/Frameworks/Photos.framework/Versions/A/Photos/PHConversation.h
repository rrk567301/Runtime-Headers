@class NSString;

@interface PHConversation : PHAssetCollection

@property (readonly, nonatomic) NSString *conversationID;

+ (id)fetchType;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchConversationsWithConversationIDs:(id)a0 options:(id)a1;
+ (id)fetchConversationsWithOptions:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
