@interface AMSCB1PDataProvider : AMSCB1PBridgeDependent <AMSCB1PDataProviderProtocol> {
    struct shared_ptr<AMSCore::IDataProvider> { struct IDataProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _dataProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDataProvider:(struct shared_ptr<AMSCore::IDataProvider> { struct IDataProvider *x0; struct __shared_weak_count *x1; })a0 parentBridge:(id)a1;
- (BOOL)setValue:(id)a0 forDomain:(const char *)a1 key:(const char *)a2 error:(id *)a3;
- (id)valueForDomain:(const char *)a0 key:(const char *)a1;

@end
