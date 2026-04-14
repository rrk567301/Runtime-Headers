@class NSData, HMDHomeManager, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject

@property (nonatomic) unsigned long long state;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSData *sessionData;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)allowedClasses;
+ (long long)role;
+ (BOOL)isSupported;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (BOOL)processSessionData:(id)a0 fromBundle:(id)a1 outAccessoryUUID:(id *)a2 outAccessoryCategory:(id *)a3 outAccessoryIDSIdentifier:(id *)a4 error:(id *)a5;

@end
