@class NSMutableOrderedSet, PXComposeRecipientSelectionSnapshot, PXComposeRecipientDataSource;
@protocol PXComposeRecipientSelectionManagerDelegate;

@interface PXComposeRecipientSelectionManager : NSObject {
    NSMutableOrderedSet *_selectedComposeRecipients;
    NSMutableOrderedSet *_selectedRecipients;
}

@property (retain, nonatomic) PXComposeRecipientSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) PXComposeRecipientDataSource *dataSource;
@property (weak, nonatomic) id<PXComposeRecipientSelectionManagerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)selectAll;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (id)_createComposeRecipientSelectionSnapshotFromCurrentState;
- (void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)a0;
- (id)_setSelectedState:(char)a0 forComposeRecipients:(id)a1;
- (void)setSelectedState:(char)a0 atIndex:(long long)a1;

@end
