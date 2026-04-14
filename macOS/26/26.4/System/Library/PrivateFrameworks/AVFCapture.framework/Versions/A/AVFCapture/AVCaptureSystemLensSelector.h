@class NSDictionary, AVCaptureDevice, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureSystemLensSelector : AVCaptureControl {
    AVCaptureDevice *_device;
    id /* block */ _action;
    NSDictionary *_displayValuesByZoomFactorValue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    BOOL _observing;
    BOOL _changesVideoZoomFactor;
    NSObject<OS_dispatch_queue> *_actionQueue;
}

@property (nonatomic) BOOL changesVideoZoomFactor;
@property (nonatomic) BOOL pickerChangesVideoZoomFactor;
@property (copy, nonatomic) NSDictionary *displayValuesByZoomFactorValue;

+ (void)initialize;

- (id)initWithDevice:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)device;
- (id)description;
- (void)dealloc;
- (id)actionQueue;
- (void)removeObservers;
- (id)_initWithDevice:(id)a0 action:(id /* block */)a1;
- (id)initWithDevice:(id)a0 action:(id /* block */)a1;
- (void)installObservers;

@end
