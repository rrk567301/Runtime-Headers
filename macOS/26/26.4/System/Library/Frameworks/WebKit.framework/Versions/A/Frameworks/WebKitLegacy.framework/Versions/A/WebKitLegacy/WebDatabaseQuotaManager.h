@class WebSecurityOrigin;

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}

- (id)origin;
- (id)initWithOrigin:(id)a0;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)usage;

@end
