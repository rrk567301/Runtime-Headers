@class NSOrderedSet;

@interface SOBlockListController : NSObject

@property (retain) NSOrderedSet *soBlockItemList;
@property (retain) id cmfBlockListUpdatedObserver;
@property (retain) id abDatabaseChangedExternallyObserver;

+ (void *)_createCMFItemRefWithUnsanitizedAddress:(id)a0;
+ (id)sharedBlockList;
+ (Class)MKMapServiceClass;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_buildBlockList;
- (BOOL)_blockCMFItemRef:(void *)a0;
- (void)_unblockCMFItem:(void *)a0;
- (id)_addressForCMItemRef:(void *)a0;
- (id)blockListItems;
- (BOOL)itemIsBlocked:(id)a0;
- (BOOL)addressIsBlocked:(id)a0;
- (BOOL)blockItem:(id)a0;
- (BOOL)blockAddress:(id)a0;
- (void)unblockItem:(id)a0;
- (void)unblockAddress:(id)a0;
- (void)removeABNotifications;
- (void)listenToABNotifications;
- (id)blockPersonAlert;

@end
