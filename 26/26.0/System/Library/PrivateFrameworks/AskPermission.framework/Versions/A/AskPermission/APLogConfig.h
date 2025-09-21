@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain) NSObject<OS_os_log> *backingOSLogObject;
@property (retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (readonly) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedUIServiceConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)sharedConfig;
+ (id)sharedDaemonConfig;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedPluginConfig;
+ (id)sharedExtensionConfig;
+ (id)sharedSettingsConfig;
+ (id)sharedFrameworkConfig;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
