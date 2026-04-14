@class NSProgress, NSButton, NSString;
@protocol PXSharedLibraryExitAssistantViewControllerDelegate;

@interface PXSharedLibraryExitAssistantViewController : PXAssistantTemplateViewController {
    NSButton *_keepAllButton;
    NSButton *_contributedOnlyButton;
    NSString *_keepAllCountsString;
    NSString *_contributedOnlyCountsString;
    BOOL _isOwnerCurrentUser;
}

@property (weak, nonatomic) id<PXSharedLibraryExitAssistantViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long exitRetentionPolicy;
@property (readonly, nonatomic) NSProgress *activityProgress;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)setExitRetentionPolicy:(long long)a0;
- (void)firstButtonAction:(id)a0;
- (void)policyChanged:(id)a0;
- (id)initWithCurrentUserIsOwner:(BOOL)a0 keepAllCountsString:(id)a1 contributedOnlyCountsString:(id)a2;
- (void)_updateButtonItems;
- (void)_updateRadioButtons;
- (void)setActivityProgress:(id)a0;
- (void)_setIsProcessing:(BOOL)a0;

@end
