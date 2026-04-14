@interface ASCAppLaunchTrampolineURL : NSObject

+ (id)URLWithAdamId:(id)a0 bundleId:(id)a1 widgetId:(id)a2 widgetSize:(long long)a3 localizedName:(id)a4 topic:(id)a5;
+ (id)URLWithAdamId:(id)a0 bundleId:(id)a1 deepLinkUrl:(id)a2 localizedName:(id)a3 sourceApplication:(id)a4 topic:(id)a5;
+ (id)URLWithAdamId:(id)a0 bundleId:(id)a1 localizedName:(id)a2 sourceApplication:(id)a3 topic:(id)a4;
+ (id)URLWithAdamId:(id)a0 bundleId:(id)a1 openInGamesUI:(BOOL)a2 metrics:(id)a3 deepLinkUrl:(id)a4 sourceApplication:(id)a5 topic:(id)a6;
+ (id)URLWithAdamId:(id)a0 bundleId:(id)a1 widgetId:(id)a2 widgetSize:(long long)a3 localizedName:(id)a4;
+ (id)URLWithAdamId:(id)a0 bundleId:(id)a1 widgetId:(id)a2 widgetSize:(long long)a3 localizedName:(id)a4 sourceApplication:(id)a5 topic:(id)a6;
+ (id)gamesURLWithAdamId:(id)a0 bundleId:(id)a1 deepLinkUrl:(id)a2 localizedName:(id)a3 sourceApplication:(id)a4 topic:(id)a5;
+ (id)gamesURLWithAdamId:(id)a0 bundleId:(id)a1 widgetId:(id)a2 widgetSize:(long long)a3 deepLinkUrl:(id)a4 localizedName:(id)a5 sourceApplication:(id)a6 topic:(id)a7;

@end
