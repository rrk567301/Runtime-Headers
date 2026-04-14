@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
}

@property (readonly, nonatomic) unsigned long long cacheSize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearCache;
- (id)initWithCacheSize:(unsigned long long)a0;
- (id)cachedStatementForSQL:(id)a0;
- (id)allStatements;
- (void)cacheStatement:(id)a0;

@end
