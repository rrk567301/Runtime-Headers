@class NSTextField, NSString, NSArray, PXPeoplePickerCollectionView, PHPhotoLibrary, NSButton, PXPeoplePickerDataSource, PXPeoplePickerDataSourceManager;
@protocol PXPeoplePickerViewControllerDelegate;

@interface PXPeoplePickerNSViewController : NSViewController <NSCollectionViewDataSource, PXPeoplePickerCollectionViewDelegate, PXSectionedDataSourceManagerObserver> {
    NSTextField *_titleTextField;
    NSTextField *_statusTextField;
    NSButton *_cancelButton;
    NSButton *_confirmButton;
    NSString *_prompt;
    PXPeoplePickerCollectionView *_collectionView;
    PXPeoplePickerDataSource *_currentDataSource;
    PXPeoplePickerDataSourceManager *_dataSourceManager;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (copy, nonatomic) NSArray *disabledIdentifiers;
@property (copy, nonatomic) NSString *prompt;
@property (weak, nonatomic) id<PXPeoplePickerViewControllerDelegate> delegate;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)_updateToolbar;
- (void)cancelOperation:(id)a0;
- (void)collectionView:(id)a0 didDeselectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_confirmPicking;
- (void)_createDataSourceManagerIfNeeded;
- (void)_updatePersonDataSource;
- (void)collectionView:(id)a0 didDoubleClickOnItemAtIndexPath:(id)a1;
- (void)confirmOperation:(id)a0;

@end
