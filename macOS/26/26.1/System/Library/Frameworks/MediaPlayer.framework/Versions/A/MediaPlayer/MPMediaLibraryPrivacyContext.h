@class MPGreenTeaLoggerWrapper;

@interface MPMediaLibraryPrivacyContext : NSObject {
    MPGreenTeaLoggerWrapper *_gtLogger;
}

+ (void)initialize;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)contextForDefaultClient;
+ (id)sharedContextForCurrentProcess;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;
- (id)initWithClientIdentity:(id)a0;
- (id)init;
- (void)beginAccessInterval;
- (void)endAccessInterval;
- (id)initWithPAApplication:(id)a0;
- (void)logPrivacyAccess;

@end
