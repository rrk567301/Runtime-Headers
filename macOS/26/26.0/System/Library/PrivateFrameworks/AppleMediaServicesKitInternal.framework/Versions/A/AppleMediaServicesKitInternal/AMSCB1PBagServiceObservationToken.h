@interface AMSCB1PBagServiceObservationToken : AMSCB1PBridgeDependent {
    struct ObserverToken { struct shared_ptr<const AMSCore::Subject<AMSCore::MapUtils::UpdateDiff<std::string>>::Observer> { struct Observer *__ptr_; struct __shared_weak_count *__cntrl_; } mObserver; } _coreToken;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
