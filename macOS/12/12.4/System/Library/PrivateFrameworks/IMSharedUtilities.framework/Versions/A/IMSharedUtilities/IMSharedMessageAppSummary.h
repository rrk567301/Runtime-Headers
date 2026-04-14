@interface IMSharedMessageAppSummary : NSObject

@property (class, copy) Class dataSourceClass;

+ (id)pluginPath;
+ (void)_initBundleClassAtPath:(id)a0;
+ (void)initializePlugin;
+ (id)previewSummary;
+ (id)previewSummaryWithPluginPayload:(id)a0;
+ (id)linkMetadataForPluginPayload:(id)a0;

@end
