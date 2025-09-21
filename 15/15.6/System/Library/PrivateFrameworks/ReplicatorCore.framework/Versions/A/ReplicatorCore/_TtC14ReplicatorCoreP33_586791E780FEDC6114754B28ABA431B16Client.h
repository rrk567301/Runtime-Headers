@interface _TtC14ReplicatorCoreP33_586791E780FEDC6114754B28ABA431B16Client : NSObject <ReplicatorServices.ReplicatorControlXPCServer> {
    void /* unknown type, empty encoding */ pid;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lock_descriptors;
}

- (id)init;
- (void).cxx_destruct;
- (char)setEnabledWithParameters:(id)a0 error:(id *)a1;
- (char)addIDToAllowListWithParameters:(id)a0 error:(id *)a1;
- (id)allowListAndReturnError:(id *)a0;
- (id)devicesAndReturnError:(id *)a0;
- (char)enableAllowListWithParameters:(id)a0 error:(id *)a1;
- (id)isAllowListEnabledAndReturnError:(id *)a0;
- (id)isEnabledAndReturnError:(id *)a0;
- (id)localDeviceAndReturnError:(id *)a0;
- (void)pairWithParameters:(id)a0 completion:(id /* block */)a1;
- (id)pushTokenWithParameters:(id)a0 error:(id *)a1;
- (char)removeFromAllowListWithParameters:(id)a0 error:(id *)a1;
- (char)retryStuckRelationshipsAndReturnError:(id *)a0;
- (char)setAllowListWithParameters:(id)a0 error:(id *)a1;
- (char)unavailableWithParameters:(id)a0 error:(id *)a1;
- (char)unpairWithParameters:(id)a0 error:(id *)a1;

@end
