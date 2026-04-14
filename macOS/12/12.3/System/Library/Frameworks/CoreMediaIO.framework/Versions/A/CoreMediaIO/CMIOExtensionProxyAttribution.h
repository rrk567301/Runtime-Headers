@class STMediaStatusDomainPublisher, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CMIOExtensionProxyAttribution : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    STMediaStatusDomainPublisher *_stMediaStatusDomainPublisher;
    NSMutableSet *_cameraCaptureAttributions;
}

+ (id)sharedAttribution;

- (void)dealloc;
- (id)init;
- (BOOL)hasCameraAttribution:(id)a0;
- (void)addCameraAttribution:(id)a0;
- (void)removeCameraAttribution:(id)a0;

@end
