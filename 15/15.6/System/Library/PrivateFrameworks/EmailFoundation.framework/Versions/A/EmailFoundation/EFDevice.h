@class NSUUID, NSString, NSObject;
@protocol OS_os_log;

@interface EFDevice : NSObject <EFLoggable>

@property (class, retain) EFDevice *currentDevice;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSUUID *identifier;
@property char isInternal;
@property char areInternalSecurityPoliciesAllowed;
@property (readonly) NSString *platformName;
@property (readonly) char isRunningNative;
@property (readonly) char supportsGenerativeModelSystems;
@property (readonly) char isPhone;
@property (readonly) char isPad;
@property (readonly) char isVirtualMachine;
@property (readonly) char isMac;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeWithDeviceIsExternal:(id /* block */)a0;
+ (void)executeWithDeviceIsInternal:(id /* block */)a0;
+ (id)testingDeviceWithInternal:(char)a0;

@end
