@interface IMKTextInputFunctionRowItemServiceViewController : NSServiceViewController <IMKTextInputTouchBarHostViewControllerProtocol>

- (void)dealloc;
- (void)invalidate;
- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setCandidateListProperties:(id)a0;
- (void)loadView;
- (void)handleCloseButtonOfCharacterPickerFunctionRowItem;
- (void)setAllowsCollapsingCandidateList:(BOOL)a0;

@end
