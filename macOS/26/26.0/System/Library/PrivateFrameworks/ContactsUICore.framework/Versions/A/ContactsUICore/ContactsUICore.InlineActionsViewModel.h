@interface ContactsUICore.InlineActionsViewModel : NSObject <CNUIContactCardActionsObserver> {
    void /* unknown type, empty encoding */ _actionsProvider;
    void /* unknown type, empty encoding */ _actionItems;
    void /* unknown type, empty encoding */ _defaultActions;
    void /* unknown type, empty encoding */ _actionTypes;
    void /* unknown type, empty encoding */ _groupActions;
    void /* unknown type, empty encoding */ _contactIdentifier;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)actionsUpdated;

@end
