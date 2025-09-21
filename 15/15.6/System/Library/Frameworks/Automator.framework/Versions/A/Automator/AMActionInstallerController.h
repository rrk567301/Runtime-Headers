@class NSURL;

@interface AMActionInstallerController : AMPluginInstallerController

@property (retain) NSURL *actionURL;

- (void).cxx_destruct;
- (id)_iconImage;
- (id)_pluginTypeName;
- (id)_completedInstallationInfoString;
- (char)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)a0 error:(id *)a1;
- (id)_installationInfoString;
- (char)_pluginIsInstallableReturningError:(id *)a0;
- (id)_pluginLibrarySubPath;
- (id)_pluginURL;
- (id)_unlocalizedPluginTypeNameComponent;
- (id)initWithActionURL:(id)a0;
- (char)isConversionAction;

@end
