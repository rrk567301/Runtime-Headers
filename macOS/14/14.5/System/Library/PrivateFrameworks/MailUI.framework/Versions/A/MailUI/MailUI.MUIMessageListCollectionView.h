@class NSString, NSArray;

@interface MailUI.MUIMessageListCollectionView : NSTableView

@property (class, nonatomic, readonly) NSString *columnIdentifier;

@property (nonatomic, readonly) NSArray *indexPathsForSelectedItems;
@property (nonatomic, readonly) NSArray *mui_indexPathsForPreparedItems;

- (id)cellForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
