@class PXContentPrivacyController, NSString, PXTabBadgeModel, PXSidebarDataContext, PXDataSectionEnablementForwarder, NSDate, PHCollection, PXLibraryFilterState, PHFetchResult;
@protocol PXNavigationListItem;

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXDataSectionManagerEnabling> {
    NSDate *_lastDuplicatesProcessingCheckDate;
}

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic, getter=isCollectionEmpty) BOOL collectionEmpty;
@property (readonly, nonatomic, getter=isCollectionVisible) BOOL collectionVisible;
@property (readonly, nonatomic) PXTabBadgeModel *badgeModel;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (nonatomic) unsigned long long lockState;
@property (retain, nonatomic) NSString *accessoryTitle;
@property (readonly, nonatomic) PXSidebarDataContext *context;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (nonatomic) BOOL isInitialDuplicateDetectorProcessingCompleted;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) id<PXNavigationListItem> listItem;
@property (nonatomic, getter=isHiddenWhenEmpty) BOOL hiddenWhenEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder;

+ (unsigned long long)lockStateFromPrivacyController:(id)a0;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsEmptyDataSection;
- (void)collectionFetchOperationDidComplete:(id)a0;
- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)a0;
- (id)initWithCollection:(id)a0 context:(id)a1;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (BOOL)shouldInvalidateDataSectionForChildDataSectionManager:(id)a0 changeDescriptor:(unsigned long long)a1;
- (void)updateDataSectionIfNecessary;

@end
