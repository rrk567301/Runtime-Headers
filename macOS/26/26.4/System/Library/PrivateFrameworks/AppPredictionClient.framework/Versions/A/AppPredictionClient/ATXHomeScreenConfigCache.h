@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)initWithPath:(id)a0;
- (id)_filePathForHomeScreenPageConfigWithClientIdentifier:(id)a0;
- (id)_filePathForTodayPage;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (id)homeScreenWidgetPersonalities;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (id)prettyPrintedJSON;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)loadDockAppListWithError:(id *)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_filePathForDockConfig;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;

@end
