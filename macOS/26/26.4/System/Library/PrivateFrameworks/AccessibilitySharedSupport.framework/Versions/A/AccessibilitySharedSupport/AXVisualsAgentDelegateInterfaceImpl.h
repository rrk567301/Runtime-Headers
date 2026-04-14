@class NSString, NSObject;
@protocol VisualsReceiver;

@interface AXVisualsAgentDelegateInterfaceImpl : NSObject <AXVisualsAgentDelegateInterface, NSXPCConnectionDelegate>

@property (retain, nonatomic) NSObject<VisualsReceiver> *visualsReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void).cxx_destruct;
- (void)closeWindowID:(unsigned int)a0;
- (id)initWithVisualsReceiver:(id)a0;
- (void)showOrUpdateWindowID:(unsigned int)a0 updateDictionary:(id)a1;

@end
