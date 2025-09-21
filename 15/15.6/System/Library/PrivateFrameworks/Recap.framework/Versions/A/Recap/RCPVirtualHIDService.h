@class NSString, NSDictionary, HIDVirtualEventService, NSMutableDictionary, RCPEventSenderProperties, NSObject;
@protocol OS_dispatch_group;

@interface RCPVirtualHIDService : NSObject <HIDVirtualEventServiceDelegate, RCPEventDeliveryService> {
    NSObject<OS_dispatch_group> *_waitForEventSystemGroup;
    NSObject<OS_dispatch_group> *_waitForPointerReadyGroup;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *propertyDictionary;
@property (retain, nonatomic) HIDVirtualEventService *eventService;
@property (retain, nonatomic) NSMutableDictionary *dynamicMetaProperties;
@property (nonatomic) char isOpen;
@property (nonatomic) char readyForPointerEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) RCPEventSenderProperties *properties;
@property (readonly, nonatomic) char isRunning;

+ (id)serviceWithIdentifier:(id)a0 properties:(id)a1;

- (void).cxx_destruct;
- (void)stop;
- (id)copyEventMatching:(id)a0 forService:(id)a1;
- (void)notification:(long long)a0 withProperty:(id)a1 forService:(id)a2;
- (id)propertyForKey:(id)a0 forService:(id)a1;
- (char)setOutputEvent:(id)a0 forService:(id)a1;
- (char)setProperty:(id)a0 forKey:(id)a1 forService:(id)a2;
- (char)startWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 properties:(id)a1;
- (void)postHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
