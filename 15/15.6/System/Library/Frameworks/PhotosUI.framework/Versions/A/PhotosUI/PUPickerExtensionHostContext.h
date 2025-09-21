@class NSString;
@protocol _PUPickerExtensionContextHostInterface;

@interface PUPickerExtensionHostContext : PUPickerExtensionContext <_PUPickerExtensionContextHostInterface>

@property (weak, nonatomic) id<_PUPickerExtensionContextHostInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_pickerDidFinishPicking:(id)a0;
- (void)_pickerDidPerformCancelAction;
- (void)_pickerDidPerformConfirmationAction;
- (void)_pickerDidSetModalInPresentation:(char)a0;
- (void)_pickerDidSetOnboardingHeaderDismissed:(char)a0;
- (void)_pickerDidSetOnboardingOverlayDismissed:(char)a0;

@end
