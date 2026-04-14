@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
}

@property (readonly, nonatomic) unsigned long long cacheSize;

- (void)cacheStatement:(id)a0;
- (id)initWithCacheSize:(unsigned long long)a0;
- (void)clearCache;
- (void).cxx_destruct;
- (void)pruneCache;
- (id)cachedStatementForSQL:(id)a0;
- (id)allStatements;
- (void)dealloc;

@end
