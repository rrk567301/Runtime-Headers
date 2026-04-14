@class NSDictionary;

@interface BWStillImageProcessorCoordinator : NSObject {
    NSDictionary *_processorControllersByType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processorControllersLock;
}

- (void)dealloc;
- (void)addController:(id)a0;
- (id)controllerForType:(unsigned long long)a0;
- (id)initWithProcessorControllers:(id)a0;
- (id)processorControllerNames;

@end
