@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSExtensionsExporter : WBSJSONExporter {
    NSObject<OS_dispatch_queue> *_extensionsDataExportQueue;
}

+ (unsigned long long)schemaVersion;
+ (id)dataType;
+ (id)extensionDataWithDisplayName:(id)a0 developerName:(id)a1 composedIdentifier:(id)a2 adamIdentifier:(id)a3 alternatePlatformExtensionBundleIdentifier:(id)a4 alternatePlatformAppBundleIdentifier:(id)a5;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)exportExtensionDictionaries:(id)a0 completionHandler:(id /* block */)a1;

@end
