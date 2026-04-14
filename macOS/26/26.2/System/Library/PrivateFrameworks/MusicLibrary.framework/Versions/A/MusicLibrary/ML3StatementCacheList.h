@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject

@property (readonly, nonatomic) ML3StatementCacheNode *firstNode;
@property (readonly, nonatomic) ML3StatementCacheNode *lastNode;
@property (readonly, nonatomic) unsigned long long count;

- (void)deleteOldestNode;
- (void)deleteAllNodes;
- (id)oldestNode;
- (void)appendNode:(id)a0;
- (void).cxx_destruct;
- (void)promoteNodeWithDictionaryKey:(id)a0;
- (id)description;

@end
