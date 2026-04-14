@interface IMKTextInputFunctionRowItemServiceViewController : NSServiceViewController <IMKTextInputTouchBarHostViewControllerProtocol>

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)exportedInterface;
- (void)invalidate;
- (void)dealloc;
- (void)handleCloseButtonOfCharacterPickerFunctionRowItem;
- (void)setCandidateListProperties:(id)a0;
- (void)setAllowsCollapsingCandidateList:(BOOL)a0;

@end
