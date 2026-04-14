@interface PLBackgroundJobCascadeDonationWorker : PLBackgroundJobWorker {
    _Atomic BOOL _cancelled;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (unsigned long long)type;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)_cascadeDonationWorkItemsInLibrary:(id)a0;
- (id)_fetchItemsInLibrary:(id)a0;
- (id)_itemForIdentificationDocument:(id)a0 withIdentifier:(id)a1;
- (BOOL)_performCascadeDonationInLibrary:(id)a0 withEnabledState:(BOOL)a1;

@end
