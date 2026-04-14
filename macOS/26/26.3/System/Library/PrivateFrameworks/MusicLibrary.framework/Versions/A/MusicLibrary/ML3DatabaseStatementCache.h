@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
}

@property (readonly, nonatomic) unsigned long long cacheSize;

- (id)allStatements;
- (id)initWithCacheSize:(unsigned long long)a0;
- (void)clearCache;
- (void)pruneCache;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cachedStatementForSQL:(id)a0;
- (void)cacheStatement:(id)a0;

@end
