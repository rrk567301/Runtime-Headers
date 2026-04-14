@class NSString, PKAccountMinimumOSVersions, NSDateFormatter, PKAccount;

@interface PKAccountMinimumOSPolicy : NSObject {
    NSDateFormatter *_dateFormatter;
}

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) PKAccountMinimumOSVersions *versions;
@property (copy, nonatomic) PKAccount *account;
@property (copy, nonatomic) NSString *deviceClass;

+ (BOOL)_isBlockedForDeviceVersion:(id)a0 deviceClass:(id)a1 account:(id)a2;
+ (id)_mockPolicyForAccount:(id)a0;
+ (id)_policyForDeviceVersion:(id)a0 deviceClass:(id)a1 account:(id)a2;
+ (BOOL)isCurrentDeviceBlockedForAccount:(id)a0;
+ (BOOL)isDevice:(id)a0 blockedForAccount:(id)a1;
+ (BOOL)isPolicyApplicableForAccountFeature:(unsigned long long)a0;
+ (id)policyForCurrentDeviceWithAccount:(id)a0;
+ (id)policyForDevice:(id)a0 account:(id)a1;
+ (unsigned long long)statusForDeviceVersion:(id)a0 deviceClass:(id)a1 currentMinimumOSVersions:(id)a2 futureVersions:(id)a3;

- (void).cxx_destruct;

@end
