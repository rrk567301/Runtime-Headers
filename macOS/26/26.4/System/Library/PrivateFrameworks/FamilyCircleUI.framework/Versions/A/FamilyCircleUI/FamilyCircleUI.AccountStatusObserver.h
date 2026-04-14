@interface FamilyCircleUI.AccountStatusObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    void /* unknown type, empty encoding */ accountStore;
}

- (void)accountWasModified:(id)a0;
- (void).cxx_destruct;
- (void)accountWasAdded:(id)a0;
- (id)init;
- (void)dealloc;
- (void)accountWasRemoved:(id)a0;

@end
