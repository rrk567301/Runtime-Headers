@interface SwiftUI.AppKitSearchFieldCoordinator : SwiftUI.PlatformViewCoordinator <NSSearchFieldDelegate, NSTokenFieldCellDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ suggestionsView;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ preferredWidth;
    void /* unknown type, empty encoding */ lastText;
    void /* unknown type, empty encoding */ isViewUpdating;
}

- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;

@end
