@class NSStoryboard, NSString, NSData, NSFont, NSObject;
@protocol NSAppearanceCustomization;

@interface _NSMenuImpl : NSObject {
    id _impl;
    id _delegate;
    id _menuOwner;
    NSObject<NSAppearanceCustomization> *_appearanceParent;
    NSFont *_font;
    NSString *_name;
    id _startingRequestor;
    double _minimumWidth;
    struct NSMenuUpdaterInfo_t { struct NSMenuUpdaterInfo_t *x0; id /* block */ x1; id x2; short x3; unsigned short x4; } *sidebandUpdaters;
    NSData *currentUpdaters;
    const void *_contextMenuPluginAEDesc;
    NSStoryboard *_storyboard;
    NSString *_lastShortcutInputSourceIdentifier;
    unsigned long long _indentationWidth;
    BOOL _disablesKeyboardAdjustedShortcuts;
    unsigned int _lastPopulateContext;
    unsigned int _minModifiersCacheTag;
    BOOL _receivedMenuPopulate;
    BOOL _receivedMenuEnableItems;
    BOOL _isPopulating;
    BOOL _hasBeenSuppressed;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
