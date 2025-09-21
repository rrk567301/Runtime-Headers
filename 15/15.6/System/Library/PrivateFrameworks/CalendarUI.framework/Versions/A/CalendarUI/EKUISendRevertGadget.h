@interface EKUISendRevertGadget : EKUIThreeButtonGadget

+ (id)showTitle;
+ (id)applyTitle;
+ (id)cancelTitle;
+ (id)deleteTitle;
+ (id)forwardTitle;
+ (id)proposeTitle;
+ (id)removeTitle;
+ (id)replyTitle;
+ (id)revertTitle;
+ (id)sendTitle;
+ (id)showOriginalTitle;
+ (id)updateTitle;

- (char)_useApplyButton;
- (char)_useReplyButton;
- (char)_useCancelProposalButton;
- (char)_useDeleteButton;
- (char)_useForwardButton;
- (char)_useProposeButton;
- (char)_useRemoveTextForDeleteButton;
- (char)_useRevertButton;
- (char)_useSendButton;
- (char)_useUpdateButton;
- (void)firstButtonClicked:(id)a0;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (void)secondButtonClicked:(id)a0;
- (id)secondButtonTitle;
- (id)secondButtonTitles;
- (char)shouldDisplay;
- (void)thirdButtonClicked:(id)a0;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;

@end
