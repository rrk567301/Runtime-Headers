@class NSString, PXCPLPhotoLibrarySource, PXObservable;
@protocol PXCPLStatusProvider;

@interface PXCPLStatusProviderMonitor : PXObservable <PXChangeObserver> {
    PXCPLPhotoLibrarySource *_photoLibrarySource;
}

@property (readonly, nonatomic) PXObservable<PXCPLStatusProvider> *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStatusProviderMonitorWithPhotoLibrary:(id)a0;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithPhotoLibrary:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setStatusProvider:(id)a0;
- (void)_updateStatusProvider;

@end
