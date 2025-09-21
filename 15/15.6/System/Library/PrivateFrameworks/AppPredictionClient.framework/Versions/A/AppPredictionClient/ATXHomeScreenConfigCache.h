@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (char)appPredictionPanelExistsInPage:(id)a0;
+ (char)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (char)suggestionsWidgetExistsInPage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)_filePathForDockConfig;
- (id)_filePathForHomeScreenPageConfig;
- (id)_filePathForTodayPage;
- (char)hasWidgetsOnTheHomeScreen;
- (id)homeScreenWidgetPersonalities;
- (id)loadDockAppListWithError:(id *)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(char)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(char)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (id)prettyPrintedJSON;
- (char)writeDockAppList:(id)a0 error:(id *)a1;
- (char)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (char)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;

@end
