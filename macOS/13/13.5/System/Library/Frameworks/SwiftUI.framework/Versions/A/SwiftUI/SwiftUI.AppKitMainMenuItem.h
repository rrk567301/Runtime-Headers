@interface SwiftUI.AppKitMainMenuItem : NSMenuItem <NSMenuDelegate> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ dynamicSubmenu;
    void /* unknown type, empty encoding */ cachedItems;
    void /* unknown type, empty encoding */ menuHost;
    void /* unknown type, empty encoding */ menuContentsAreInvalid;
    void /* unknown type, empty encoding */ menuIsOpen;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 action:(SEL)a1 keyEquivalent:(id)a2;
- (void)menuDidClose:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)menuWillOpen:(id)a0;

@end
