@class NSURL;

@interface AMActionInstallerController : AMPluginInstallerController

@property (retain) NSURL *actionURL;

- (void).cxx_destruct;
- (id)_iconImage;
- (id)_completedInstallationInfoString;
- (id)_pluginTypeName;
- (id)_installationInfoString;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)_pluginURL;
- (BOOL)_pluginIsInstallableReturningError:(id *)a0;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)a0 error:(id *)a1;
- (id)_pluginLibrarySubPath;
- (id)initWithActionURL:(id)a0;
- (BOOL)isConversionAction;

@end
