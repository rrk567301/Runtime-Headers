@class NSAttributedString, ReadingListItemView;
@protocol ReadingListTableCellViewDelegate;

@interface ReadingListTableCellView : SidebarTableCellView {
    ReadingListItemView *_readingListItemView;
}

@property (readonly, nonatomic) NSAttributedString *itemTitleString;
@property (readonly, nonatomic) NSAttributedString *itemDomainString;
@property (readonly, nonatomic) NSAttributedString *itemPreviewTextString;
@property (weak, nonatomic) id<ReadingListTableCellViewDelegate> delegate;
@property (nonatomic) BOOL showAsOffline;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (BOOL)hasVariableHeight;

- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setUpSubviews;
- (id)_readingListItem;
- (void)_setUpBindings;
- (void)_updateThumbnailView;
- (id)_savingForOfflinePreviewTextForItemIfApplicable:(id)a0;
- (void)_updateThumbnailImageViewWithImage:(id)a0;
- (double)calculatedHeightOfRow;

@end
