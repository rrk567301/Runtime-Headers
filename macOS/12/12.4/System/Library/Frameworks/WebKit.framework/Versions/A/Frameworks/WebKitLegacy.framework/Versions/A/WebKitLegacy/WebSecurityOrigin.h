@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _applicationCacheQuotaManager;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (id)initWithURL:(id)a0;
- (id)host;
- (unsigned short)port;
- (id)protocol;
- (unsigned long long)usage;
- (void *)_core;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)a0;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;
- (id)databaseQuotaManager;
- (id)databaseIdentifier;
- (id)applicationCacheQuotaManager;

@end
