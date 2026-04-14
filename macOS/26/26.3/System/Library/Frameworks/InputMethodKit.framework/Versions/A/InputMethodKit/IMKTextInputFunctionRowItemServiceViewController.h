@interface IMKTextInputFunctionRowItemServiceViewController : NSServiceViewController <IMKTextInputTouchBarHostViewControllerProtocol>

- (void)invalidate;
- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)loadView;
- (void)handleCloseButtonOfCharacterPickerFunctionRowItem;
- (void)setCandidateListProperties:(id)a0;
- (void)setAllowsCollapsingCandidateList:(BOOL)a0;

@end
