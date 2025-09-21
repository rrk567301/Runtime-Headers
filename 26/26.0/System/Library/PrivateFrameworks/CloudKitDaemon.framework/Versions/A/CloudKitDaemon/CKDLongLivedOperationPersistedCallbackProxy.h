@class NSString, CKDOperationInfoCache, Protocol;

@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject <CKDOperationCallbackProxy>

@property (copy, nonatomic) NSString *operationID;
@property (retain, nonatomic) Protocol *callbackProtocol;
@property (nonatomic) SEL completionSelector;
@property (retain, nonatomic) CKDOperationInfoCache *operationInfoCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)addBarrierBlock:(id /* block */)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithOperationID:(id)a0 callbackProtocol:(id)a1 completionSelector:(SEL)a2 operationInfoCache:(id)a3;

@end
