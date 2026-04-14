@class NSTextField, NSView, NSProgressIndicator, NSString, NSViewAnimation, NSArray, NSTimer, NSURL, NSImage, NSViewController, NSImageView, NSButton;

@interface AMPluginInstallerController : NSWindowController <NSTouchBarDelegate, NSAnimationDelegate>

@property (weak) NSButton *secondButton;
@property (weak) NSButton *firstButton;
@property (weak) NSButton *thirdButton;
@property (weak) NSImageView *iconView;
@property (weak) NSTextField *informativeTextField;
@property (weak) NSTextField *messageTextField;
@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) NSView *accessoryView;
@property (copy) NSString *messageText;
@property (copy) NSString *informativeText;
@property (retain) NSImage *icon;
@property (retain) NSViewController *accessoryViewController;
@property (retain) NSViewAnimation *animation;
@property (retain) NSString *pluginName;
@property (retain) NSArray *queuedAnimations;
@property (retain) NSTimer *installTimer;
@property (retain) NSURL *installedURL;
@property long long mode;
@property (readonly, nonatomic) NSURL *_pluginURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlForExistingPluginNamed:(id)a0 atLibrarySubPath:(id)a1;

- (long long)run;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)a0;
- (id)_iconImage;
- (id)makeTouchBar;
- (void)windowDidLoad;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)initWithWindowNibName:(id)a0;
- (void)buttonClicked:(id)a0;
- (void)_didPresentPreInstallErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;
- (void)_installTimerFired:(id)a0;
- (id)_localizedNameForURL:(id)a0;
- (id)_completedInstallationInfoString;
- (id)_pluginTypeName;
- (id)_accessoryViewNibName;
- (id)_installationInfoString;
- (id)_unlocalizedPluginTypeNameComponent;
- (BOOL)_shouldShowThirdButton;
- (BOOL)_pluginIsInstallableReturningError:(id *)a0;
- (BOOL)_doPostInstallWorkOnMainThreadWithDestinationURL:(id)a0 error:(id *)a1;
- (id)_pluginLibrarySubPath;
- (id)_installMessageDictionary;
- (id)_replaceMessageDictionary;
- (id)_userVisibleInstallErrorForPluginInstallationError:(id)a0;
- (void)_configureRequestMode;
- (void)_configureReplaceMode;
- (void)_configureInstallationMode;
- (void)_configureCompletedModeWithError:(id)a0;
- (void)_layoutWindowWithProgressIndicator:(BOOL)a0 infoField:(BOOL)a1 accessoryView:(BOOL)a2;
- (id)_writeableInstalledPluginLocationURL;
- (id)_targetPluginLocationURLCreatingIfNecessaryError:(id *)a0;
- (BOOL)_pluginAlreadyInstalled;
- (void)_installPlugin;
- (id)_animationWithAnimations:(id)a0;
- (void)_queueAnimations:(id)a0;

@end
