@interface MPMediaLibraryPrivacyContext : NSObject

+ (void)initialize;
+ (id)sharedContextForCurrentProcess;
+ (id)contextForDefaultClient;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithClientIdentity:(id)a0;
- (id)initWithPAApplication:(id)a0;
- (void)logPrivacyAccess;
- (void)beginAccessInterval;
- (void)endAccessInterval;

@end
