@class NSStoryboard, NSString, NSFont, NSObject;
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
    const void *_contextMenuPluginAEDesc;
    NSStoryboard *_storyboard;
    NSString *_lastShortcutInputSourceIdentifier;
    unsigned long long _indentationWidth;
    BOOL _disablesKeyboardAdjustedShortcuts;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
