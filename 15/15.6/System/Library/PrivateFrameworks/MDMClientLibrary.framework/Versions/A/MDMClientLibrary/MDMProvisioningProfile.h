@class NSString;

@interface MDMProvisioningProfile : NSObject <MDMProvisioningProfileProtocol>

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *allowedAppIDEntitlement;
@property (readonly, nonatomic) char isAppleInternal;
@property (readonly, nonatomic) char isBeta;
@property (readonly, nonatomic) char isFreePP;
@property (readonly, nonatomic) char isUniversalPP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)allowsAppIDEntitlement:(id)a0;

@end
