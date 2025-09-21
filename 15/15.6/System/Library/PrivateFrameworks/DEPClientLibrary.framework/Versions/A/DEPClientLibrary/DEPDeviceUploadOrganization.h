@class NSNumber, NSString, NSArray;

@interface DEPDeviceUploadOrganization : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *skipItrackCheckNum;
@property (retain, nonatomic) NSNumber *deviceAdditionDepEnabledNum;
@property (retain, nonatomic) NSNumber *idmsWhitelistingEnabledNum;
@property (retain, nonatomic) NSNumber *idmsRemoveDeviceEnabledNum;
@property (retain, nonatomic) NSNumber *deviceAdditionGbiEnabledNum;
@property (readonly, nonatomic) NSString *orgId;
@property (readonly, nonatomic) NSString *orgName;
@property (readonly, nonatomic) NSArray *approvers;
@property (readonly, nonatomic) char skipItrackCheck;
@property (readonly, nonatomic) char deviceAdditionDepEnabled;
@property (readonly, nonatomic) char idmsWhitelistingEnabled;
@property (readonly, nonatomic) char idmsRemoveDeviceEnabled;
@property (readonly, nonatomic) char deviceAdditionGbiEnabled;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDict:(id)a0;
- (id)_approversFromApproversArray:(id)a0;
- (id)initWithOrgId:(id)a0 orgName:(id)a1 approvers:(id)a2 skipItrackCheck:(char)a3 deviceAdditionDepEnabled:(char)a4 idmsWhitelistingEnabled:(char)a5 idmsRemoveDeviceEnabled:(char)a6 deviceAdditionGbiEnabled:(char)a7;

@end
