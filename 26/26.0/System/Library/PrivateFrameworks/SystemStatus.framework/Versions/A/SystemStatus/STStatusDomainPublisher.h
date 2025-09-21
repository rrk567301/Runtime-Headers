@class NSString;
@protocol STStatusDomainDataChangeContext, STStatusDomainPublisherServerHandle, STStatusDomainDataDifferencing, STStatusDomainData;

@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    id<STStatusDomainPublisherServerHandle> _serverHandle;
}

@property (class, readonly, nonatomic) unsigned long long statusDomainName;
@property (class, readonly, copy, nonatomic) id<STStatusDomainData, STStatusDomainDataDifferencing> emptyData;
@property (class, readonly, copy, nonatomic) id<STStatusDomainDataChangeContext> emptyChangeContext;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } *internalStateLock;
@property (readonly, nonatomic) BOOL _lock_isInvalidated;
@property (copy, nonatomic) id<STStatusDomainData> data;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (copy, nonatomic) id<STStatusDomainData> volatileData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerHandle:(id)a0;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void)dealloc;
- (void)invalidate;
- (void)updateData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setVolatileData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)updateVolatileData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateVolatileDataWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)updateVolatileDataWithBlock:(id /* block */)a0;
- (void)updateDataWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setData:(id)a0 completion:(id /* block */)a1;
- (void)setVolatileData:(id)a0 completion:(id /* block */)a1;
- (void)updateDataWithBlock:(id /* block */)a0;

@end
