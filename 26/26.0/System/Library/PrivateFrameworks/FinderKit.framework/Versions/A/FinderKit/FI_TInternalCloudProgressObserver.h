@class NSArray, NSIndexSet, NSProgress, FI_TCloudProgressObserver, NSObject, FI_TKeyValueObserverGlue;

@interface FI_TInternalCloudProgressObserver : NSObject {
    struct TNSWeakPtr<FI_TCloudProgressObserver> { FI_TCloudProgressObserver *fWeakObject; } _observer;
    struct TIndividualSyncProgressObserver { struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } fFractionCompletedObserver; struct TNSWeakPtr<NSProgress> { NSProgress *fWeakObject; } fProgress; } _downloadProgress;
    struct TIndividualSyncProgressObserver { struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } fFractionCompletedObserver; struct TNSWeakPtr<NSProgress> { NSProgress *fWeakObject; } fProgress; } _uploadProgress;
    int _progressCount;
    struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } _accumulatedAggregateCompleted;
}

@property (readonly, weak, nonatomic) FI_TCloudProgressObserver *observer;
@property (readonly, nonatomic) BOOL syncedWithICloud;

- (id)downloadProgress;
- (id)progresses;
- (id)initWithObserver:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (id)uploadProgress;
- (void)fractionCompletedChanged:(id)a0;
- (void)progressEnded:(id)a0;
- (void)progressStarting:(id)a0;

@end
