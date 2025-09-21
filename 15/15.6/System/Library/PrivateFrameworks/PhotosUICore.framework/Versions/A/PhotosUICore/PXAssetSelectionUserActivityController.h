@class PXSectionedSelectionManager, PXSelectionSnapshot, NSUserActivity, NSString;

@interface PXAssetSelectionUserActivityController : NSObject <PXChangeObserver, NSUserActivityDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _snapshotLock;
}

@property (retain, nonatomic) NSUserActivity *currentUserActivity;
@property (nonatomic) char hasSelection;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, getter=isActive) char active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)userActivityWillSave:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithSelectionManager:(id)a0;
- (void)_updateActivity;

@end
