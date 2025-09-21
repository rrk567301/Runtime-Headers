@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureDepthDataOutputInternal_Tundra : NSObject {
    char alwaysDiscardsLateDepthData;
    char filteringEnabled;
    AVWeakReference *weakReferenceDelegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } internalLock;
}

- (void)dealloc;
- (id)init;

@end
