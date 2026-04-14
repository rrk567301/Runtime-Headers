@class NSURL;

@interface AMActionInstallerController : AMPluginInstallerController

@property (retain) NSURL *actionURL;

- (void).cxx_destruct;
- (id)_iconImage;
- (id)_pluginURL;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)_installationInfoString;
- (id)_pluginTypeName;
- (BOOL)_pluginIsInstallableReturningError:(id *)a0;
- (id)_completedInstallationInfoString;
- (id)_pluginLibrarySubPath;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)a0 error:(id *)a1;
- (BOOL)isConversionAction;
- (id)initWithActionURL:(id)a0;

@end
