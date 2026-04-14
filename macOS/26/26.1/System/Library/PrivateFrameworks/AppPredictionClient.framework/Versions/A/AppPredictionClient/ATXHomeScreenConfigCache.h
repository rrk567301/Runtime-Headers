@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)initWithPath:(id)a0;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (id)_filePathForHomeScreenPageConfigWithClientIdentifier:(id)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)prettyPrintedJSON;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (id)loadDockAppListWithError:(id *)a0;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)_filePathForDockConfig;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (id)_filePathForTodayPage;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 forClientWithIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (id)homeScreenWidgetPersonalities;
- (id)init;

@end
