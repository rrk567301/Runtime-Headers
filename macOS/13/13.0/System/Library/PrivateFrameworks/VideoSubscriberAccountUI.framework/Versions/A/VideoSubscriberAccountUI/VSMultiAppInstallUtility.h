@interface VSMultiAppInstallUtility : NSObject

+ (void)determineMultiAppEnabledForProvider:(id)a0 completion:(id /* block */)a1;
+ (void)isShowMultiAppInstallForCaseAlwaysRequirePasswordEnabledWithBagLoadOperation:(id)a0 completion:(id /* block */)a1;
+ (id)getDecidedNonChannelAppsForProvider:(id)a0 account:(id)a1 device:(id)a2;

@end
