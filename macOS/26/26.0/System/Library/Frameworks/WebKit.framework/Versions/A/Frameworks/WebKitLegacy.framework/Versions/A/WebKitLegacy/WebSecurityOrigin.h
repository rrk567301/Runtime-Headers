@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (unsigned long long)usage;
- (void)setQuota:(unsigned long long)a0;
- (void)dealloc;
- (id)databaseIdentifier;
- (id)stringValue;
- (id)host;
- (id)protocol;
- (id)initWithURL:(id)a0;
- (unsigned long long)quota;
- (unsigned short)port;
- (BOOL)isEqual:(id)a0;
- (id)_initWithString:(id)a0;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;
- (void *)_core;
- (id)databaseQuotaManager;

@end
