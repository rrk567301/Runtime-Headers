@class AVWeakObservableCallbackCancellationHelper, AVWeakReference, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}

- (void)addCallbackToCancel:(id)a0;
- (void)dealloc;
- (void)valueForKey:(id)a0 dependsOnValueAtKeyPath:(id)a1;
- (void)cancelAllCallbacks;
- (id)initWithDependencyHost:(id)a0;
- (void)dependencyHostIsFullyInitialized;

@end
