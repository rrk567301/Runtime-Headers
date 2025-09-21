@class NSArray;

@interface WBSCoreAnalyticsExtensionsStatistics : NSObject

@property (readonly, nonatomic) unsigned long long enabledCount;
@property (readonly, nonatomic) unsigned long long disabledCount;
@property (readonly, nonatomic) NSArray *telemetryDataForExtensions;
@property (readonly, nonatomic) char hasExtensionThatCanOverrideNewTabPage;
@property (readonly, nonatomic) char newTabPageIsOverridden;

- (void).cxx_destruct;
- (id)initWithExtensionsList:(id)a0 extractDeveloperIdentifier:(id /* block */)a1 extractComposedIdentifier:(id /* block */)a2 extensionTelemetryDataPredicate:(id /* block */)a3;
- (id)initWithExtensionsList:(id)a0 extractDeveloperIdentifier:(id /* block */)a1 extractComposedIdentifier:(id /* block */)a2 extensionTelemetryDataPredicate:(id /* block */)a3 newTabPageIsOverridden:(char)a4;

@end
