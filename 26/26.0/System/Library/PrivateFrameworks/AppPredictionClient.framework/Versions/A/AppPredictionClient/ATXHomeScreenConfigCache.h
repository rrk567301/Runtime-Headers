@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)initWithPath:(id)a0;
- (id)_filePathForDockConfig;
- (id)loadDockAppListWithError:(id *)a0;
- (id)_filePathForHomeScreenPageConfig;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)init;
- (id)_filePathForTodayPage;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)homeScreenWidgetPersonalities;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)prettyPrintedJSON;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
