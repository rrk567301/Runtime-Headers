@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (id)origin;
- (unsigned long long)usage;
- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)quota;
- (id)initWithOrigin:(id)a0;

@end
