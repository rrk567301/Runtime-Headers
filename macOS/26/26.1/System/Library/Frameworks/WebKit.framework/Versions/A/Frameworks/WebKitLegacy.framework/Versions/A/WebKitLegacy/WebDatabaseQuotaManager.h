@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)quota;
- (id)initWithOrigin:(id)a0;
- (unsigned long long)usage;
- (id)origin;

@end
