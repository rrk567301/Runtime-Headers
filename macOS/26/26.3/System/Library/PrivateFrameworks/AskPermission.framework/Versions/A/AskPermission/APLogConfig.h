@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain) NSObject<OS_os_log> *backingOSLogObject;
@property (retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (readonly) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedConfig;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedPluginConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)sharedExtensionConfig;
+ (id)sharedFrameworkConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedSettingsConfig;
+ (id)sharedUIServiceConfig;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
