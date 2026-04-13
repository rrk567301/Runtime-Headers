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

- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)loadView;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (id)nibName;
- (id)nibBundle;
- (id)makeTouchBar;
- (void)viewDidAppear;
- (void)setNoConfiguredAccountImage;
- (id)serviceNotConfiguredError;
- (void)closeAndConfigure:(id)a0;

@end
