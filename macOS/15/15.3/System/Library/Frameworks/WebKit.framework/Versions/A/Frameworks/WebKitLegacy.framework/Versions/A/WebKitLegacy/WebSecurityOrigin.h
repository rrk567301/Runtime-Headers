@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)host;
- (id)initWithURL:(id)a0;
- (unsigned short)port;
- (id)stringValue;
- (id)protocol;
- (unsigned long long)usage;
- (void *)_core;
- (id)_initWithString:(id)a0;
- (unsigned long long)quota;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;
- (id)databaseIdentifier;
- (id)databaseQuotaManager;
- (void)setQuota:(unsigned long long)a0;

@end
