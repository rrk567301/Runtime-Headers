@interface FamilyCircleUI.AccountStatusObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    void /* unknown type, empty encoding */ accountStore;
}

- (void)accountWasAdded:(id)a0;
- (void).cxx_destruct;
- (void)accountWasRemoved:(id)a0;
- (id)init;
- (void)accountWasModified:(id)a0;
- (void)dealloc;

@end
