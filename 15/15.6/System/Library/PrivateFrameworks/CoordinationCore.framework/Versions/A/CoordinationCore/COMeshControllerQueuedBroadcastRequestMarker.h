@class COMeshRequest, NSString;

@interface COMeshControllerQueuedBroadcastRequestMarker : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, copy, nonatomic) COMeshRequest *request;
@property (readonly, copy, nonatomic) id /* block */ recipientCallback;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) char includeSelfInBroadcast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)command;
- (id)destination;
- (id)initWithRequest:(id)a0 includeSelf:(char)a1 recipientBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)invokeCallbackWithError:(id)a0;

@end
