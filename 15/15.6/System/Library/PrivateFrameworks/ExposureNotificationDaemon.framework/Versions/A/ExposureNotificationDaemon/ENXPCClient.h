@class NSString, ENRegion;

@interface ENXPCClient : NSObject

@property (nonatomic) int accessLevel;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *signingIdentity;
@property (nonatomic) char entitledForLogging;
@property (nonatomic) char entitledToSkipFileSigningVerification;
@property (nonatomic) char entitledToSkipKeyReleasePrompt;
@property (nonatomic) char entitledToShowBuddy;
@property (readonly, nonatomic) int appAPIVersion;
@property (readonly, copy, nonatomic) ENRegion *appRegion;
@property (readonly, nonatomic) char entitledForDifferentialPrivacy;
@property (readonly, nonatomic) char entitledForTestVerification;

+ (id)clientWithAuditToken:(struct { unsigned int x0[8]; })a0 pid:(int)a1;

- (id)description;
- (void).cxx_destruct;
- (void)activateWithAppAPIVersion:(int)a0 regionISO:(id)a1;

@end
