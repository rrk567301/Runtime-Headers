@interface SwiftUI.AppKitToolbarBridge : NSObject <NSToolbarDelegate, NSTouchBarDelegate> {
    void /* unknown type, empty encoding */ nsToolBar;
    void /* unknown type, empty encoding */ nsTouchBar;
    void /* unknown type, empty encoding */ lastPreferenceSeed;
    void /* unknown type, empty encoding */ toolbarStorage;
    void /* unknown type, empty encoding */ storageByLocation;
    void /* unknown type, empty encoding */ focusedValues;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultToolbarId;
}

- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarSelectableItemIdentifiers:(id)a0;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)updateSelection:(id)a0;

@end
