@class NSUUID, NSString, NSObject;
@protocol OS_os_log;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (long long)role;
+ (BOOL)isSupported;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 sessionIdentifier:(id)a1;
- (BOOL)processSessionData:(id)a0 fromBundle:(id)a1 outAccessoryUUID:(id *)a2 outAccessoryCategory:(id *)a3 outAccessoryIDSIdentifier:(id *)a4 error:(id *)a5;

@end
