@class NSSet, NSMutableSet, CoreIRLearningSession, NSObject;
@protocol OS_dispatch_queue, CoreRCManagerDelegate;

@interface CoreRCManager : NSObject {
    id<CoreRCManagerDelegate> _delegate;
}

@property (readonly, nonatomic) NSMutableSet *busesInternal;
@property (readonly, nonatomic) CoreIRLearningSession *learningSessionInternal;
@property (readonly, nonatomic) NSSet *buses;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)initWithSerialQueue:(id)a0;
- (void)addBus:(id)a0;
- (id)managedBusEquivalentTo:(id)a0;
- (id)managedDeviceEquivalentTo:(id)a0;
- (void)removeBus:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 ofBus:(id)a2 error:(id *)a3;
- (id)propertyForKey:(id)a0 ofBus:(id)a1 error:(id *)a2;
- (BOOL)setExtendedProperty:(id)a0 forKey:(id)a1 ofDevice:(id)a2 error:(id *)a3;
- (id)extendedPropertyForKey:(id)a0 ofDevice:(id)a1 error:(id *)a2;
- (id)managedBusForDevice:(id)a0;
- (BOOL)sendHIDEvent:(id)a0 fromDevice:(id)a1 toDevice:(id)a2 error:(id *)a3;
- (BOOL)sendCommand:(unsigned long long)a0 fromDevice:(id)a1 toDevice:(id)a2 withDuration:(unsigned long long)a3 error:(id *)a4;
- (void)notifyDelegateAddBus:(id)a0;
- (void)notifyDelegateRemoveBus:(id)a0;
- (id)buses;
- (void)notifyDelegateUpdateBus:(id)a0;

@end
