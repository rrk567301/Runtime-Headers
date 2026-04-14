@interface ContactsUICore.ContactCardHeaderSwiftUIViewModel : NSObject <CNUIContactCardActionsObserver> {
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ _actionsProvider;
    void /* unknown type, empty encoding */ _isEmergencyContact;
    void /* unknown type, empty encoding */ _isBlocked;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contactFormatter;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)actionsUpdated;

@end
