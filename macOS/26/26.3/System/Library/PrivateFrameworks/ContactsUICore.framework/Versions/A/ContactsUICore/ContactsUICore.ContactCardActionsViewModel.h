@interface ContactsUICore.ContactCardActionsViewModel : NSObject <CNUIContactCardActionsObserver> {
    void /* unknown type, empty encoding */ _actionsProvider;
    void /* unknown type, empty encoding */ _sendMessageMenuItems;
    void /* unknown type, empty encoding */ _addToFavoritesMenuItems;
    void /* unknown type, empty encoding */ _gameCenterAddFriendMenuItems;
    void /* unknown type, empty encoding */ _addToEmergencyContactsMenuItems;
    void /* unknown type, empty encoding */ _placement;
    void /* unknown type, empty encoding */ _viewControllerToPresent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contactFormatter;
    void /* unknown type, empty encoding */ _supportedSections;
    void /* unknown type, empty encoding */ _sections;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)actionsUpdated;
- (void)presentViewController:(id)a0 forActionType:(long long)a1;

@end
