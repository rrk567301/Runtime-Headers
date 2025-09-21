@interface IMKTextInputFunctionRowItemServiceViewController : NSServiceViewController <IMKTextInputTouchBarHostViewControllerProtocol>

- (id)exportedInterface;
- (void)loadView;
- (void)dealloc;
- (void)invalidate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleCloseButtonOfCharacterPickerFunctionRowItem;
- (void)setCandidateListProperties:(id)a0;
- (void)setAllowsCollapsingCandidateList:(BOOL)a0;

@end
