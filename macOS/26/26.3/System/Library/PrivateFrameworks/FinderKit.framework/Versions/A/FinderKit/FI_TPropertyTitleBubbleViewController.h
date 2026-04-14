@class NSDictionary, FI_TTitleBubbleView, NSImage, FI_TInlineProgressView, NSView;

@interface FI_TPropertyTitleBubbleViewController : FI_IPropertyValueController {
    NSDictionary *_titleAttributes;
    struct TProgressStateAggregator { int fCloudBadgePrevious; int fCloudBadgeCurrent; struct TNodeProgressStatus { unsigned int fOperationState; float fPercentageDone; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fOperationType; BOOL fCancellable; BOOL fCancelled; BOOL fPausable; BOOL fUserDownload; NSImage *fImage; float fDownloadPercentageDone; long long fDownloadTotalSize; long long fDownloadCompletedSize; float fUploadPercentageDone; long long fUploadTotalSize; long long fUploadCompletedSize; } fProgressStatus; double fIncrementalProgress; BOOL fResumable; } _progressStateAggregator;
    struct TTitleViewBadgeConfigurator { struct unique_ptr<TTitleViewBadgeConfigurator::Details, std::default_delete<TTitleViewBadgeConfigurator::Details>> { struct { struct Details *__ptr_; } ; } fDetails; } _badgeConfigurator;
    FI_TInlineProgressView *_progressView;
    NSImage *_screenTimeBadge;
    NSView *_badgePlaceHolderView;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _singularSelection;
}

@property (readonly, retain, nonatomic) FI_TTitleBubbleView *titleView;
@property (nonatomic) long long textAlignment;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (id)titleAttributes;
- (void)initCommon;
- (id)progressView;
- (void).cxx_destruct;
- (BOOL)shouldBeVisible;
- (void)setValue:(id)a0;
- (id).cxx_construct;
- (id)font;
- (void)configureView;
- (BOOL)hasProgressView;
- (void)handleBulkNodesChanged:(const void *)a0 observedNodes:(const void *)a1;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (BOOL)shouldShowPlaceHolder;
- (void)updateICloudBadgeForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)updateProgressView;
- (void)updateScreenTimeBadgeForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)updateTitleBubbleView:(id)a0;
- (void)updateWithNodes:(const void *)a0;

@end
