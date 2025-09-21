@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject

@property (readonly, nonatomic) ML3StatementCacheNode *firstNode;
@property (readonly, nonatomic) ML3StatementCacheNode *lastNode;
@property (readonly, nonatomic) unsigned long long count;

- (void)deleteAllNodes;
- (void)promoteNodeWithDictionaryKey:(id)a0;
- (void)appendNode:(id)a0;
- (id)oldestNode;
- (id)description;
- (void)deleteOldestNode;
- (void).cxx_destruct;

@end
