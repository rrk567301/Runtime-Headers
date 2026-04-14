@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPStreamServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id _selfRef;
    NSMutableDictionary *_streamSessions;
}

@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) id<RPMessageable> messenger;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ streamAcceptHandler;
@property (nonatomic) unsigned int streamFlags;
@property (copy, nonatomic) id /* block */ streamPrepareHandlerEx;
@property (copy, nonatomic) id /* block */ streamPrepareHandler;
@property (nonatomic) int streamQoS;

- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)description;
- (id)init;
- (void)_invalidated;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)_invalidate;
- (void)_handleStartRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleStopRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;

@end
