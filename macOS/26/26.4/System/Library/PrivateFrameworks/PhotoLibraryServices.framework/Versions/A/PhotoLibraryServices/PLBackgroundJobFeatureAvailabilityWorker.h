@interface PLBackgroundJobFeatureAvailabilityWorker : PLBackgroundJobWorker

@property (class, readonly) double minimumSecondsBetweenJobs;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)_criteriaToUse;

- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void)stopWorkingOnItem:(id)a0;
- (unsigned long long)type;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)_featureAvailabilityIsStale:(id)a0 inLibrary:(id)a1;

@end
