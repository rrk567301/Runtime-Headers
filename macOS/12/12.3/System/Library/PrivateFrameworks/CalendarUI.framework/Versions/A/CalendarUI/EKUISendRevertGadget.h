@interface EKUISendRevertGadget : EKUIThreeButtonGadget

+ (id)showTitle;
+ (id)showOriginalTitle;
+ (id)deleteTitle;
+ (id)revertTitle;
+ (id)proposeTitle;
+ (id)cancelTitle;
+ (id)forwardTitle;
+ (id)replyTitle;
+ (id)sendTitle;
+ (id)updateTitle;
+ (id)applyTitle;

- (BOOL)shouldDisplay;
- (id)firstButtonTitle;
- (id)secondButtonTitle;
- (id)thirdButtonTitle;
- (BOOL)_useDeleteButton;
- (BOOL)_useReplyButton;
- (BOOL)_useSendButton;
- (BOOL)_useUpdateButton;
- (BOOL)_useApplyButton;
- (BOOL)_useRevertButton;
- (BOOL)_useProposeButton;
- (BOOL)_useCancelProposalButton;
- (BOOL)_useForwardButton;
- (id)firstButtonTitles;
- (id)secondButtonTitles;
- (id)thirdButtonTitles;
- (void)firstButtonClicked:(id)a0;
- (void)secondButtonClicked:(id)a0;
- (void)thirdButtonClicked:(id)a0;

@end
