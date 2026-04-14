@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject

@property (readonly, nonatomic) ML3StatementCacheNode *firstNode;
@property (readonly, nonatomic) ML3StatementCacheNode *lastNode;
@property (readonly, nonatomic) unsigned long long count;

- (void)deleteAllNodes;
- (id)description;
- (id)oldestNode;
- (void)appendNode:(id)a0;
- (void)promoteNodeWithDictionaryKey:(id)a0;
- (void).cxx_destruct;
- (void)deleteOldestNode;

@end
