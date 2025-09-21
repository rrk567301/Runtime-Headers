@class NSSet, NSMutableDictionary;

@interface BWStillImageProcessorCoordinator : NSObject {
    NSMutableDictionary *_processorControllersByType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processorControllersLock;
}

@property (readonly, nonatomic) NSSet *processorControllerNames;

- (void)dealloc;
- (id)description;
- (void)addController:(id)a0;
- (id)controllerForType:(unsigned long long)a0;
- (id)initWithProcessorControllers:(id)a0;
- (void)releaseControllers;

@end
