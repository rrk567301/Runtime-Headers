@interface ContactsUICore.ContactCardCustomActionsViewModel : NSObject <CNUIContactCardActionsObserver> {
    void /* unknown type, empty encoding */ _customActionSections;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ _actionsProvider;
    void /* unknown type, empty encoding */ placement;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)actionsUpdated;

@end
