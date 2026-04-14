@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (id)host;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0;
- (unsigned long long)usage;
- (void)setQuota:(unsigned long long)a0;
- (id)databaseIdentifier;
- (id)stringValue;
- (id)protocol;
- (unsigned short)port;
- (unsigned long long)quota;
- (void)dealloc;
- (id)_initWithString:(id)a0;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;
- (void *)_core;
- (id)databaseQuotaManager;

@end
