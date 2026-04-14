@class NSOrderedSet;

@interface IMBlockListController : NSObject

@property (retain, nonatomic) NSOrderedSet *imBlockItemList;
@property (retain, nonatomic) id cmfBlockListUpdatedObserver;
@property (retain, nonatomic) id cnDatabaseChangedExternallyObserver;
@property (nonatomic) BOOL allowsExpensiveBlockListChecking;

+ (id)sharedBlockList;
+ (void *)_createCMFItemRefWithUnsanitizedAddress:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)blockContact:(id)a0;
- (void)unblockContact:(id)a0;
- (void)_buildBlockList;
- (id)_addressForCMItemRef:(void *)a0;
- (BOOL)_blockCMFItemRef:(void *)a0;
- (void)_unblockCMFItem:(void *)a0;
- (BOOL)addressIsBlocked:(id)a0;
- (BOOL)blockItem:(id)a0;
- (id)blockListItems;
- (BOOL)itemIsBlocked:(id)a0;
- (void)listenToCNNotifications;
- (void)removeCNNotifications;
- (void)unblockItem:(id)a0;

@end
