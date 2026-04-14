@class NSString, NSCollectionViewDiffableDataSource, PXSharedLibraryRulePeopleDataManager, PHPhotoLibrary, NSLayoutConstraint, NSCollectionView;
@protocol PXSharedLibraryPreferencesPeopleViewControllerDelegate;

@interface PXSharedLibraryPreferencesPeopleViewController : NSViewController <NSMenuItemValidation, PXPeoplePickerCollectionViewItemDelegate, PXPeoplePickerViewControllerDelegate, PXSharedLibraryRulePeopleDataManagerDelegate> {
    NSLayoutConstraint *_boxHeightConstraint;
    NSCollectionView *_collectionView;
    NSCollectionViewDiffableDataSource *_collectionViewDataSource;
    PXSharedLibraryRulePeopleDataManager *_dataManager;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL hasPeople;
@property (readonly, nonatomic) NSString *statusMessage;
@property (weak, nonatomic) id<PXSharedLibraryPreferencesPeopleViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)_updateProperties;
- (void)preferredScrollerStyleDidChange:(id)a0;
- (void)identifyClickedForViewItem:(id)a0;
- (void)removeClickedForViewItem:(id)a0;
- (void)peoplePickerViewController:(id)a0 didFinishPickingPeopleWithUUIDs:(id)a1;
- (void)peoplePickerViewControllerDidCancel:(id)a0;
- (void)sharedLibraryRulePeopleControllerDidChangeCurrentSnapshot:(id)a0;
- (void)_updateCollectionViewItem:(id)a0 forRulePerson:(id)a1;
- (void)_handleMissingPhotoLibrary;
- (void)addOtherPeople:(id)a0;
- (void)_updateBoxHeightConstraint;

@end
