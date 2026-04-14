@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (id)protocol;
- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)quota;
- (id)host;
- (unsigned short)port;
- (id)stringValue;
- (unsigned long long)usage;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)databaseIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)_initWithString:(id)a0;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;
- (void *)_core;
- (id)databaseQuotaManager;

@end
