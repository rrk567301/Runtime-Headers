@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (BOOL)hasWidgetsOnTheHomeScreen;
- (id)_filePathForHomeScreenPageConfigWithClientIdentifier:(id)a0;
- (id)homeScreenWidgetPersonalities;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (id)prettyPrintedJSON;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (id)_filePathForTodayPage;
- (void).cxx_destruct;
- (id)loadDockAppListWithError:(id *)a0;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (id)initWithPath:(id)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)init;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)_filePathForDockConfig;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;

@end
