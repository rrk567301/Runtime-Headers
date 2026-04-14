@class NSString, NSDictionary, HIDVirtualEventService, NSObject;
@protocol OS_dispatch_queue;

@interface AXSSActionHIDSender : NSObject <HIDVirtualEventServiceDelegate>

@property (retain, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventSendingQueue;
@property (retain, nonatomic) HIDVirtualEventService *eventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 forService:(id)a2;
- (void).cxx_destruct;
- (void)notification:(long long)a0 withProperty:(id)a1 forService:(id)a2;
- (BOOL)setOutputEvent:(id)a0 forService:(id)a1;
- (id)init;
- (id)copyEventMatching:(id)a0 forService:(id)a1;
- (id)propertyForKey:(id)a0 forService:(id)a1;
- (void)dealloc;

@end
