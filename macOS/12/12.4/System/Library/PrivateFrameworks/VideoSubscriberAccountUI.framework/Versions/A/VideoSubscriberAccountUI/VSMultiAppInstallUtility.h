@interface VSMultiAppInstallUtility : NSObject

+ (void)isShowMultiAppInstallForCaseAlwaysRequirePasswordEnabled:(id /* block */)a0;
+ (void)determineMultiAppEnabledForProvider:(id)a0 completion:(id /* block */)a1;
+ (id)getDecidedNonChannelAppsForProvider:(id)a0 account:(id)a1 device:(id)a2;

@end
