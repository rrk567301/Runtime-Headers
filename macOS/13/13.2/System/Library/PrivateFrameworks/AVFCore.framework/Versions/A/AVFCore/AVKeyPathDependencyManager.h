@class AVWeakObservableCallbackCancellationHelper, AVWeakReference, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}

- (void)dealloc;
- (void)addCallbackToCancel:(id)a0;
- (void)cancelAllCallbacks;
- (void)valueForKey:(id)a0 dependsOnValueAtKeyPath:(id)a1;
- (id)initWithDependencyHost:(id)a0;
- (void)dependencyHostIsFullyInitialized;

@end
