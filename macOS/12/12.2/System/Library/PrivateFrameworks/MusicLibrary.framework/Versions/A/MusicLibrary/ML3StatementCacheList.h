@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject

@property (readonly, nonatomic) ML3StatementCacheNode *firstNode;
@property (readonly, nonatomic) ML3StatementCacheNode *lastNode;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (void)appendNode:(id)a0;
- (void)deleteAllNodes;
- (void)promoteNodeWithDictionaryKey:(id)a0;
- (void)deleteOldestNode;
- (id)oldestNode;

@end
