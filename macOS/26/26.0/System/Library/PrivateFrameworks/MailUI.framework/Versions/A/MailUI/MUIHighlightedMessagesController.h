@class NSArray, EMMessageRepository, EFDebouncer, NSPredicate;

@interface MUIHighlightedMessagesController : NSObject <EMCollectionChangeObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_reloadDebouncer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reloadWithEmptyUpdateDebouncer;
    void /* function */ mailboxes;
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, readonly) EMMessageRepository *repository;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) EFDebouncer *reloadDebouncer;
@property (nonatomic, retain) EFDebouncer *reloadWithEmptyUpdateDebouncer;
@property (nonatomic, copy) NSArray *mailboxes;
@property (nonatomic, retain) NSPredicate *filterPredicate;

- (id)init;
- (void).cxx_destruct;
- (id)messageList;
- (void)collection:(id)a0 addedItemIDs:(id)a1 before:(id)a2;
- (void)collectionDidFinishInitialLoad:(id)a0;
- (void)collection:(id)a0 movedItemIDs:(id)a1 before:(id)a2;
- (void)collection:(id)a0 addedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 changedItemIDs:(id)a1;
- (void)collection:(id)a0 deletedItemIDs:(id)a1;
- (void)collection:(id)a0 movedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 replacedExistingItemID:(id)a1 withNewItemID:(id)a2;
- (id)initWithRepository:(id)a0 delegate:(id)a1;
- (void)reloadApplyingEmptyUpdate:(BOOL)a0;

@end
