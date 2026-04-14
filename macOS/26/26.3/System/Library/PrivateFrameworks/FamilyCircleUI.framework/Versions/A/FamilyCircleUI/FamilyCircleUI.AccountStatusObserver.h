@interface FamilyCircleUI.AccountStatusObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    void /* unknown type, empty encoding */ accountStore;
}

- (void)accountWasModified:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;

@end
