@class NSObject;
@protocol OS_os_log;

@interface IASServerSupport : NSObject

@property (retain) NSObject<OS_os_log> *connObj;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)enableServerServices:(struct AuthorizationOpaqueRef { } *)a0;
- (void)disableServerServices:(struct AuthorizationOpaqueRef { } *)a0;

@end
