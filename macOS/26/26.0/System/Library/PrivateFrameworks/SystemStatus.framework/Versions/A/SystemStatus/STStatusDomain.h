@class NSArray, NSString;
@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    id /* block */ _lock_dataChangedBlock;
    id /* block */ _lock_dataChangedWithContextBlock;
    BOOL _wantsUntransformedData;
}

@property (class, readonly, nonatomic) unsigned long long statusDomainName;

@property (readonly, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, copy, nonatomic) id<STStatusDomainData> data;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (readonly, nonatomic) BOOL wantsUntransformedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerHandle:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void)observeDataWithBlock:(id /* block */)a0;
- (void)observeData:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithServerHandle:(id)a0 wantsUntransformedData:(BOOL)a1;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;

@end
