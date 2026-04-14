@class NSArray, NSImageView, NSTextField;

@interface Safari.BookmarksSidebarUniversalTableCellView : BookmarksTableCellView <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ cellStyle;
    void /* unknown type, empty encoding */ originalTitle;
    void /* unknown type, empty encoding */ thumbnailRequestToken;
    void /* unknown type, empty encoding */ faviconRequestToken;
    void /* unknown type, empty encoding */ leadingConstraint;
    void /* unknown type, empty encoding */ trailingConstraint;
    void /* unknown type, empty encoding */ iconContainerView;
}

@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) long long cellType;
@property (nonatomic, readonly) NSArray *requestTokens;
@property (nonatomic, readonly) NSImageView *trailingImageView;
@property (nonatomic, readonly) NSTextField *countLabel;
@property (nonatomic, readonly) double rowHeight;

+ (long long)cellTypeForBookmark:(id)a0;

- (void)controlTextDidEndEditing:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)requestFavicon:(id)a0;
- (void)cancelAllMetadataRequests;
- (void)requestGridFolderIcon:(id)a0;

@end
