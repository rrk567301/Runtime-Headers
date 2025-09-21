@class REMListBadge, NSString, REMListChangeItem;

@interface REMListAppearanceContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (copy, nonatomic) REMListBadge *badge;
@property (copy, nonatomic) NSString *badgeEmblem;

- (void).cxx_destruct;
- (id)initWithListChangeItem:(id)a0;
- (void)setShowingLargeAttachments:(char)a0;
- (char)showingLargeAttachments;

@end
