@class NSObject, NSImageView, FI_TBasicImageView, NSImage, NSString, FI_TButton, NSLayoutGuide, FI_TInlineProgressView, FI_TTextField, NSLayoutConstraint, FI_TListNameSubtitleTextField, FI_TICloudBadgeButton, FI_TTagsImageView;
@protocol TListNameFieldDelegate;

@interface FI_TListNameCellView : FI_TListBaseCellView <TICloudBadgeButtonContainer, TInlineProgressViewContainer> {
    FI_TBasicImageView *_iconImageView;
    NSLayoutConstraint *_iconImageViewWidthConstraint;
    NSLayoutConstraint *_iconImageViewTrailingConstraint;
    NSLayoutConstraint *_titleCenterYConstraint;
    FI_TListNameSubtitleTextField *_subtitleTextField;
    NSLayoutGuide *_subtitleTextFieldLayoutGuide;
    NSLayoutConstraint *_subtitleLayoutGuideLeadingFixedConstraint;
    NSLayoutConstraint *_subtitleLayoutGuideLeadingFlexibleConstraint;
    NSLayoutConstraint *_subtitleLayoutGuideTrailingFlexibleConstraint;
    NSLayoutConstraint *_subtitleLayoutGuideTrailingFixedConstraint;
    FI_TTextField *_belowTitleView;
    FI_TButton *_ejectButton;
    NSLayoutConstraint *_ejectButtonTrailingConstraint;
    NSImageView *_screenTimeImageView;
    NSLayoutConstraint *_screenTimeTrailingConstraint;
    NSLayoutConstraint *_screenTimeSpacingConstraintOnMaster;
    FI_TTagsImageView *_tagsImageView;
    NSLayoutConstraint *_tagsTrailingConstraint;
    NSLayoutConstraint *_tagsSpacingConstraintOnMaster;
    FI_TBasicImageView *_vendorBadgeImageView;
    NSLayoutConstraint *_vendorBadgeTrailingConstraint;
    NSLayoutConstraint *_vendorBadgeSpacingConstraintOnMaster;
    FI_TICloudBadgeButton *_syncBadgeImageButton;
    NSLayoutConstraint *_syncBadgeSpacingConstraintOnMaster;
    FI_TInlineProgressView *_progressView;
    struct TProgressStateAggregator { int fiCloudBadgePrevious; int fiCloudBadgeCurrent; struct TNodeProgressStatus { unsigned int fOperationState; float fPercentageDone; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fOperationType; BOOL fCancellable; BOOL fCancelled; BOOL fPausable; BOOL fUserDownload; NSImage *fImage; float fDownloadPercentageDone; long long fDownloadTotalSize; long long fDownloadCompletedSize; float fUploadPercentageDone; long long fUploadTotalSize; long long fUploadCompletedSize; } fProgressStatus; double fIncrementalProgress; BOOL fResumable; } _progressStateAggregator;
    NSLayoutConstraint *_progressViewSpacingConstraintOnMaster;
    FI_TButton *_resumeButton;
    NSLayoutConstraint *_resumeButtonTrailingConstraint;
}

@property (weak, nonatomic) NSObject<TListNameFieldDelegate> *lnfDelegate;
@property (retain, nonatomic) NSLayoutGuide *masterLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
+ (double)interItemSpacing;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id).cxx_construct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleFont:(id)a0;
- (id)titleCell;
- (long long)titleAlignment;
- (void)setTags:(const void *)a0;
- (void)setTitleHidden:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)setDimmed:(BOOL)a0;
- (void)setIconSize:(double)a0;
- (double)iconSize;
- (id)iconImageView;
- (void)setIconImage:(id)a0;
- (id)nameTextField;
- (void)setTitleStr:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0;
- (struct CGSize { double x0; double x1; })idealSize;
- (void)setIconDimmed:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleEditorMaxFrame;
- (double)titleBaselineFromTop;
- (id)lnfDelegate;
- (void)setLnfDelegate:(id)a0;
- (void)showOrHideResumeButtonToMatchProgress;
- (void)updateProgressView;
- (void)setICloudBadge:(int)a0 toolTip:(const void *)a1 clickHandler:(const void *)a2;
- (void)setProgressStatus:(const void *)a0;
- (void)setTitleShouldEdit:(BOOL)a0;
- (id)createTitleImage;
- (id)hitTestInTitle:(const struct CGPoint { double x0; double x1; } *)a0;
- (void)setImportantInfoAtHeadOfSubtitle:(BOOL)a0;
- (void)setSubtitleStringSet:(const void *)a0 isTrailingAligned:(BOOL)a1 calcMinWidthFromStrs:(BOOL)a2;
- (void)setBelowTitleView:(const void *)a0 titleOffset:(double)a1;
- (void)setEjectButtonWithFunc:(const void *)a0;
- (void)setResumeButtonWithFunc:(const void *)a0;
- (void)setScreenTimeBadge:(id)a0 toolTip:(const void *)a1;
- (void)setVendorBadge:(id)a0 toolTip:(const void *)a1;
- (void)masterLayoutGuideFrameDidChange;

@end
