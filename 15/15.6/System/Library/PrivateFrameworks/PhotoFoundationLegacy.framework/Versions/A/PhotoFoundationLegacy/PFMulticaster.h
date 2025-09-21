@class NSString, NSHashTable, PFWeakHash, NSMutableSet;
@protocol PFMulticasterDelegate;

@interface PFMulticaster : NSObject <PFWeakHashDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _receiverLock;
    NSHashTable *_strongReceivers;
    PFWeakHash *_weakReceivers;
    NSMutableSet *_strongReceiverLists;
    PFWeakHash *_weakReceiverLists;
}

@property (weak) id<PFMulticasterDelegate> delegate;
@property (readonly) char invalidated;
@property (readonly) char acceptingReceivers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)resolveClassMethod:(SEL)a0;
+ (void)configureClass:(Class)a0 asMulticasterOf:(id)a1;
+ (id)_extractProtocolFromSelectorName:(id)a0 prefix:(id)a1 suffix:(id)a2;
+ (char)_isPlaceholderClassByDecodingClassName;
+ (Class)_multicasterClassForProtocolNamed:(id)a0;
+ (id)_newProtocolMulticaster;
+ (id)_protocolNameByDecodingClassName;
+ (id)_subclassNameByEncodingProtocolName:(id)a0 placeholder:(char)a1;
+ (void)_validateProtocol:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeReceiver:(id)a0;
- (char)addReceiver:(id)a0;
- (void)_enumerateReceiversWithBlock:(id /* block */)a0;
- (char)addWeakReceiver:(id)a0;
- (void)distributeSelector:(SEL)a0 distributionBlock:(id /* block */)a1;
- (void)distributeSelector:(SEL)a0 toReceivers:(id)a1 distributionBlock:(id /* block */)a2;
- (void)handleMultiplyRegistered:(id)a0;
- (void)postNoReceiversNotice;
- (char)stopAcceptingReceivers;
- (void)weakHashBecameEmpty:(id)a0;

@end
