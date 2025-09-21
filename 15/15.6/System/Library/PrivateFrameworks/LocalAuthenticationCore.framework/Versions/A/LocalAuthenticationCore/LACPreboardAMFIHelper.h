@interface LACPreboardAMFIHelper : NSObject

@property (class, readonly, nonatomic) long long useCase;

+ (void)completeCurrentBootModeWithSuccess:(char)a0;
+ (id)getUPPProfile;
+ (char)installProfileWithUUID:(id)a0 signature:(id)a1 error:(id *)a2;

@end
