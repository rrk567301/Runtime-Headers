@interface FamilyCircleUI.AccountStatusObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    void /* unknown type, empty encoding */ accountStore;
}

- (void)accountWasRemoved:(id)a0;
- (void)dealloc;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
