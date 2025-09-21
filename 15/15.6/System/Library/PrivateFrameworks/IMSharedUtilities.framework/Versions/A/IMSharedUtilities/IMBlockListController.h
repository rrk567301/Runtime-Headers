@class NSOrderedSet;

@interface IMBlockListController : NSObject

@property (retain, nonatomic) NSOrderedSet *imBlockItemList;
@property (retain, nonatomic) id cmfBlockListUpdatedObserver;
@property (retain, nonatomic) id cnDatabaseChangedExternallyObserver;

+ (id)sharedBlockList;
+ (void *)_createCMFItemRefWithUnsanitizedAddress:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_buildBlockList;
- (void)unblockAddress:(id)a0;
- (id)_addressForCMItemRef:(void *)a0;
- (char)_blockCMFItemRef:(void *)a0;
- (void)_unblockCMFItem:(void *)a0;
- (char)addressIsBlocked:(id)a0;
- (char)blockAddress:(id)a0;
- (char)blockItem:(id)a0;
- (id)blockListItems;
- (char)itemIsBlocked:(id)a0;
- (void)listenToCNNotifications;
- (void)removeCNNotifications;
- (void)unblockItem:(id)a0;

@end
