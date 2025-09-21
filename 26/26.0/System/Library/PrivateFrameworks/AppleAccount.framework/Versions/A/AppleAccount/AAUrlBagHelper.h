@interface AAUrlBagHelper : NSObject

+ (BOOL)isLCInviteAcceptanceEnabled;
+ (BOOL)canRepairBeneficiary;
+ (BOOL)canRepairCustodian;
+ (long long)maxRepairCount;
+ (long long)maxRepairCountForBeneficiaries;

@end
