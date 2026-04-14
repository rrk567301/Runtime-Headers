@class BSActionResponder, NSString, BSSettings, FBSSceneSnapshotRequestHandle, NSMutableArray;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate> {
    NSMutableArray *_requests;
    FBSSceneSnapshotRequestHandle *_outgoingRequestHandle;
    int _expired;
    BSActionResponder *_responder;
}

@property (copy, nonatomic) id /* block */ requestHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) double expirationInterval;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExpired:(BOOL)a0;
- (BOOL)_remainsActionable;
- (Class)fallbackXPCEncodableClass;
- (void)_finishAllRequests;
- (double)expirationInterval;
- (void)executeRequestsWithHandler:(id /* block */)a0 completionHandler:(id /* block */)a1 expirationHandler:(id /* block */)a2;
- (BOOL)snapshotRequest:(id)a0 performWithContext:(id)a1;
- (id)initWithRequests:(id)a0 expirationInterval:(double)a1 responseHandler:(id /* block */)a2;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)snapshotRequestAllowSnapshot:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)_executeNextRequest;
- (void)setNullificationHandler:(id /* block */)a0;
- (void)encodeWithXPCDictionary:(id)a0;

@end
