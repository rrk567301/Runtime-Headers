@class PLSearchTrackedChangeTypes, PLSpotlightDonationManager, NSObject, PLSearchIndexConfiguration;
@protocol NSCopying;

@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker

@property (copy) NSObject<NSCopying> *cancelledWorkItem;
@property (retain, nonatomic) PLSearchIndexConfiguration *searchIndexConfiguration;
@property (retain, nonatomic) PLSearchTrackedChangeTypes *searchTrackedChangeTypes;
@property (retain, nonatomic) PLSpotlightDonationManager *donationManager;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)_isTokenInvalidError:(id)a0;
+ (id)_transactionIteratorSinceToken:(id)a0 library:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (void)_beginSearchIndexRebuildForLibrary:(id)a0 item:(id)a1 rebuildReasons:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_resumeSearchIndexRebuildForLibrary:(id)a0 item:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)_resetSpotlightIndexForLibrary:(id)a0;
- (void)_resetCancelledWorkItem;
- (BOOL)_shouldCancelCurrentWorkItem:(id)a0;
- (BOOL)_handleChangesForTransaction:(id)a0 library:(id)a1;

@end
