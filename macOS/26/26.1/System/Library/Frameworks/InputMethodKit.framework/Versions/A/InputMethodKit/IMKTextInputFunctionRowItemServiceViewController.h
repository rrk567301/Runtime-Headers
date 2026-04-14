@interface IMKTextInputFunctionRowItemServiceViewController : NSServiceViewController <IMKTextInputTouchBarHostViewControllerProtocol>

- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)invalidate;
- (void)loadView;
- (void)dealloc;
- (void)handleCloseButtonOfCharacterPickerFunctionRowItem;
- (void)setCandidateListProperties:(id)a0;
- (void)setAllowsCollapsingCandidateList:(BOOL)a0;

@end
