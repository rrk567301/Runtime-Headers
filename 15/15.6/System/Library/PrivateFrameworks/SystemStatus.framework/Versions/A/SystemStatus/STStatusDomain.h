@class NSArray, NSString;
@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle> {
    char _wantsUntransformedData;
    char _invalidated;
    id /* block */ _dataChangedBlock;
    id /* block */ _dataChangedWithContextBlock;
}

@property (class, readonly, nonatomic) unsigned long long statusDomainName;

@property (readonly, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, copy, nonatomic) id<STStatusDomainData> data;
@property (readonly, nonatomic, getter=isInvalidated) char invalidated;
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (readonly, nonatomic) char wantsUntransformedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeDataWithBlock:(id /* block */)a0;
- (id)initWithServerHandle:(id)a0;
- (id)initWithServerHandle:(id)a0 wantsUntransformedData:(char)a1;
- (void)observeData:(id /* block */)a0;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;

@end
