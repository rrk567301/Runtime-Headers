@class NSArray, NSIndexSet, NSValue, FI_TICloudProgressObserver, NSObject, FI_TKeyValueObserverGlue;

@interface FI_TInternalCloudProgressObserver : NSObject {
    struct TNSWeakPtr<FI_TICloudProgressObserver, void> { NSValue *fWeakObject; } _observer;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _localizedDescriptionObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _localizedAdditionalDescriptionObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _fractionCompletedObserver;
    struct TNSWeakPtr<NSProgress, void> { NSValue *fWeakObject; } _progress;
}

@property (readonly, weak, nonatomic) FI_TICloudProgressObserver *observer;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithObserver:(id)a0;
- (void)aboutToTearDown;
- (id)observer;
- (id)progresses;
- (void)progressStarting:(id)a0;
- (void)fractionCompletedChanged:(id)a0;
- (void)progressEnded:(id)a0;

@end
