@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface COAlarmAddOnListenerProvider : NSObject <COServiceListenerProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serviceListener;
- (char)serviceShouldAcceptNewConnection:(id)a0;

@end
