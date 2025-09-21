@class MPGreenTeaLoggerWrapper;

@interface MPMediaLibraryPrivacyContext : NSObject {
    MPGreenTeaLoggerWrapper *_gtLogger;
}

+ (void)initialize;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)contextForDefaultClient;
+ (id)sharedContextForCurrentProcess;

- (id)initWithClientIdentity:(id)a0;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;
- (void)beginAccessInterval;
- (void)endAccessInterval;
- (id)initWithPAApplication:(id)a0;
- (void)logPrivacyAccess;

@end
