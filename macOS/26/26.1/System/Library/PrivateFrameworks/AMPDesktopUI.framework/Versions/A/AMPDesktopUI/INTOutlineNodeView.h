@class NSString, NSObject, NSTextField;
@protocol INTOutlineNodeViewDelegate;

@interface INTOutlineNodeView : NSTableCellView

@property (class, readonly) NSString *reuseIdentifier;

@property (retain, nonatomic) NSTextField *issuesLabel;
@property (retain, nonatomic) NSTextField *hiddenLabel;
@property (retain, nonatomic) NSTextField *nameLabel;
@property (nonatomic) BOOL rolledOver;
@property (retain, nonatomic) NSObject *item;
@property (nonatomic) id<INTOutlineNodeViewDelegate> delegate;

- (void)mouseExited:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setObjectValue:(id)a0;
- (void)mouseEntered:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)currItem;
- (void)dumpLayer:(id)a0;
- (void)updateRollover;

@end
