@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)initWithPath:(id)a0;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)loadDockAppListWithError:(id *)a0;
- (id)init;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)homeScreenWidgetPersonalities;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)_filePathForTodayPage;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (id)_filePathForDockConfig;
- (id)_filePathForHomeScreenPageConfigWithClientIdentifier:(id)a0;
- (id)prettyPrintedJSON;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;

@end
