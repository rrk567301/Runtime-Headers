@interface SPUISICloudDriveAppLibraryCollectionObserver : NSObject {
    void /* unknown type, empty encoding */ collectionWorkingQueue;
    void /* unknown type, empty encoding */ observationEndWorkItem;
    void /* unknown type, empty encoding */ itemCollectionsLock;
    void /* unknown type, empty encoding */ itemCollectionsForDomain;
}

@property (class, nonatomic, readonly) SPUISICloudDriveAppLibraryCollectionObserver *shared;

- (void)endObserving;
- (void).cxx_destruct;
- (void)beginObserving;
- (id)init;
- (void)updateWithDomains:(id)a0;

@end
