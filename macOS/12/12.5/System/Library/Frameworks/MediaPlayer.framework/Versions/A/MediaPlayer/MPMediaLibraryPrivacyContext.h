@interface MPMediaLibraryPrivacyContext : NSObject

+ (void)initialize;
+ (id)contextForDefaultClient;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)sharedContextForCurrentProcess;

- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)endAccessInterval;
- (void)beginAccessInterval;
- (id)initWithClientIdentity:(id)a0;
- (void)logPrivacyAccess;
- (id)initWithPAApplication:(id)a0;

@end
