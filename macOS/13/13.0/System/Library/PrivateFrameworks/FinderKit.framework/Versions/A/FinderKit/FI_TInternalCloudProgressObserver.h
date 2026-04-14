@class NSArray, NSIndexSet, NSValue, FI_TICloudProgressObserver, NSObject, FI_TKeyValueObserverGlue;

@interface FI_TInternalCloudProgressObserver : NSObject {
    struct TNSWeakPtr<FI_TICloudProgressObserver> { NSValue *fWeakObject; } _observer;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _localizedDescriptionObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _localizedAdditionalDescriptionObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _fractionCompletedObserver;
    struct TNSWeakPtr<NSProgress> { NSValue *fWeakObject; } _progress;
    int _progressCount;
}

@property (readonly, weak, nonatomic) FI_TICloudProgressObserver *observer;
@property (readonly, nonatomic) BOOL syncedWithICloud;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithObserver:(id)a0;
- (void)aboutToTearDown;
- (id)progresses;
- (void)progressStarting:(id)a0;
- (void)fractionCompletedChanged:(id)a0;
- (void)progressEnded:(id)a0;

@end
