@class NSImageView, NSTextField, NSString, NSLayoutConstraint;
@protocol AnnotatedBookmarksSidebarExpandedTableCellViewDelegate;

@interface AnnotatedBookmarksSidebarExpandedTableCellView : BookmarksTableCellView <NSControlTextEditingDelegate> {
    NSLayoutConstraint *_editingTitleHeightConstraint;
    NSLayoutConstraint *_editingDescriptionHeightConstraint;
    id _faviconRequestToken;
    id _thumbnailRequestToken;
}

@property (readonly, nonatomic) NSTextField *titleTextField;
@property (readonly, nonatomic) NSTextField *domainTextField;
@property (readonly, nonatomic) NSTextField *previewTextField;
@property (weak, nonatomic) NSLayoutConstraint *leadingPaddingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *trailingPaddingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *spaceBetweenImageAndTextConstraint;
@property (weak, nonatomic) NSLayoutConstraint *spaceBetweenDescriptionTextAndBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *spaceBetweenImageAndBottomConstraint;
@property (weak, nonatomic) NSTextField *descriptionTextField;
@property (weak, nonatomic) NSTextField *addressTextField;
@property (weak, nonatomic) NSImageView *faviconView;
@property (weak, nonatomic) id<AnnotatedBookmarksSidebarExpandedTableCellViewDelegate> expandedCellViewDelegate;
@property (readonly, nonatomic) double fittingHeight;
@property (nonatomic) BOOL showingThumbnail;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidEndEditing:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)requestTokens;
- (void)editPreviewText;
- (id)_setMonogramThumbnailWithBookmark:(id)a0;
- (void)cancelAllMetadataRequests;
- (void)didRecognizeLongPress:(id)a0;
- (void)editTitle;
- (void)requestFaviconWithBookmark:(id)a0;
- (void)requestThumbnailWithBookmark:(id)a0;
- (void)updateTextFieldMaxLayoutWidths;

@end
