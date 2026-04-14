@interface EKUISendRevertGadget : EKUIThreeButtonGadget

+ (id)showTitle;
+ (id)showOriginalTitle;
+ (id)deleteTitle;
+ (id)cancelTitle;
+ (id)revertTitle;
+ (id)replyTitle;
+ (id)sendTitle;
+ (id)updateTitle;
+ (id)applyTitle;
+ (id)proposeTitle;
+ (id)forwardTitle;

- (BOOL)shouldDisplay;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (id)secondButtonTitle;
- (id)secondButtonTitles;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;
- (void)firstButtonClicked:(id)a0;
- (void)secondButtonClicked:(id)a0;
- (void)thirdButtonClicked:(id)a0;
- (BOOL)_useCancelProposalButton;
- (BOOL)_useDeleteButton;
- (BOOL)_useRevertButton;
- (BOOL)_useSendButton;
- (BOOL)_useUpdateButton;
- (BOOL)_useApplyButton;
- (BOOL)_useReplyButton;
- (BOOL)_useProposeButton;
- (BOOL)_useForwardButton;

@end
