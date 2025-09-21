@class NSObject;
@protocol OS_os_log;

@interface IMSandboxingUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *logger;

+ (char)enterSandboxWithBundleIdentifier:(const char *)a0;

- (id)logger;

@end
