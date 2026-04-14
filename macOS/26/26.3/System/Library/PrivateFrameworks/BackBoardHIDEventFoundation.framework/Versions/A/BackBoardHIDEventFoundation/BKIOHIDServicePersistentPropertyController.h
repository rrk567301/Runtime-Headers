@class NSString, BKSLocalDefaults, NSMutableArray;

@interface BKIOHIDServicePersistentPropertyController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _defaultsLock;
    BKSLocalDefaults *_defaultsLock_defaults;
    NSMutableArray *_handlersLock_handlers;
    NSString *_defaultsKey;
}

@property (readonly, copy, nonatomic) NSString *clientEntitlement;

+ (id)sharedInstances;
+ (id)digitizerServicePersistentPropertyController;
+ (id)touchSensitiveButtonServicePersistentPropertyController;

- (void)registerHandler:(id)a0;
- (void).cxx_destruct;
- (id)allPersistentPropertiesForServicesMatchingDescriptor:(id)a0;
- (id)initWithClientEntitlement:(id)a0 defaults:(id)a1 defaultsKey:(id)a2;
- (id)persistentPropertiesForKeys:(id)a0 forSenderDescriptor:(id)a1;
- (void)setPersistentProperties:(id)a0 forSenderDescriptor:(id)a1;

@end
