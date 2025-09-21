@class NSImageView, NSTextField, NSImage, NSString, NSTouchBar, NSButton;

@interface NSSharingAccountConfigurationViewController : NSViewController <NSSharingPlugInViewControllerProtocol> {
    NSTouchBar *configurationTouchBar;
}

@property (readonly) NSImageView *logoImageView;
@property (readonly) NSImageView *iconImageView;
@property (readonly) NSTextField *setupTextField;
@property (readonly) NSButton *cancelButton;
@property (readonly) NSButton *configureButton;
@property (retain) NSImage *previewImage;
@property (getter=isPreviewImageVisible) BOOL previewImageVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidAppear;
- (void)close:(id)a0;
- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (id)nibName;
- (id)makeTouchBar;
- (id)nibBundle;
- (void)closeAndConfigure:(id)a0;
- (id)serviceNotConfiguredError;
- (void)setNoConfiguredAccountImage;

@end
