@interface AppleAccountUI.RecoveryContactsViewModel : NSObject <AAUIRepairDelegate> {
    void /* unknown type, empty encoding */ _trustedContacts;
    void /* unknown type, empty encoding */ _trustedContactOwners;
    void /* unknown type, empty encoding */ accountManager;
    void /* unknown type, empty encoding */ contactsProvider;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ telemetryFlowID;
    void /* unknown type, empty encoding */ custodianController;
    void /* unknown type, empty encoding */ reviewCustodianListViewModel;
    void /* unknown type, empty encoding */ repairHelper;
}

- (void).cxx_destruct;
- (id)init;
- (void)finishingRepair;
- (void)startingRepair;
- (void)fetchAllTrustedContacts;

@end
