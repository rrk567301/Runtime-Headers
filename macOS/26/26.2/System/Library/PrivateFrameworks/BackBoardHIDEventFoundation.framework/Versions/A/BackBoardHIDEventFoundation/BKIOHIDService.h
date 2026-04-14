@class NSObject, NSString, NSMutableArray, BKSHIDEventSenderDescriptor;
@protocol OS_dispatch_queue;

@interface BKIOHIDService : NSObject <BKHIDEventSenderInfo, BSDescriptionProviding, NSCopying> {
    BKIOHIDService *_strongSelf;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _workQueueAccessLock;
    NSObject<OS_dispatch_queue> *_workQueue_do_not_touch_directly;
    struct __IOHIDNotification { } *_workQueue_removalNotification;
    struct __IOHIDNotification { } *_workQueue_willTerminateNotification;
    NSMutableArray *_workQueue_disappearanceObservers;
    BKSHIDEventSenderDescriptor *_senderDescriptorForKeyboardEvents;
}

@property (nonatomic) struct __IOHIDService { } *IOHIDService;
@property (copy, nonatomic) NSString *displayUUID;
@property (nonatomic) int eventSource;
@property (nonatomic) unsigned long long senderID;
@property (nonatomic) unsigned int primaryUsagePage;
@property (nonatomic) unsigned int primaryUsage;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor;
@property (nonatomic) long long serviceStatus;
@property (readonly, nonatomic) NSString *uniqueProductIdentifier;
@property (readonly, nonatomic) BOOL isVirtualService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)senderDescriptorForEventType:(unsigned int)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_workQueue_startIOServiceRemovalNotifications;
- (void)removeDisappearanceObserver:(id)a0;
- (BOOL)setProperties:(id)a0;
- (void)_workQueue_stopIOServiceRemovalNotifications;
- (id)initForSimulatorWithDisplayUUID:(id)a0;
- (BOOL)claimsToConformToUsagePage:(unsigned short)a0 usage:(unsigned short)a1;
- (void)_serviceWasRemoved;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setUpInitialProperties;
- (void)asyncSetProperty:(id)a0 forKey:(id)a1;
- (void)asyncSetProperties:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)asyncSetProperty:(id)a0 forKey:(id)a1 andDelayForSeconds:(double)a2;
- (void).cxx_destruct;
- (id)initWithHIDServiceRef:(struct __IOHIDService { } *)a0;
- (id)_initForTestingWithSenderID:(unsigned long long)a0 setUpInitialProperties:(BOOL)a1;
- (id)_disappearanceObservers;
- (id)propertyForKey:(id)a0;
- (void)setElementValue:(unsigned int)a0 forUsagePage:(unsigned int)a1 usage:(unsigned int)a2;
- (id)succinctDescription;
- (id)propertyOfClass:(Class)a0 forKey:(id)a1;
- (void)addDisappearanceObserver:(id)a0 queue:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
