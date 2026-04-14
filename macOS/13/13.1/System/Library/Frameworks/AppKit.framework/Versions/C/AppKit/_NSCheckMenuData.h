@class NSMenu;

@interface _NSCheckMenuData : NSObject {
    BOOL _useKeyCode;
    BOOL _autoRepeat;
    BOOL _caching;
    unsigned int _menuDepth;
    unsigned int _initialContext;
    struct OpaqueEventRef { } *_keyEvent;
    double _eventTime;
    unsigned int _eventRawMods;
    unsigned int _eventMods;
    unsigned int _eventKey;
    unsigned int _eventChar;
    struct { unsigned short keyEventAltCharacter; unsigned short keyEventCharWithoutCmdKey; unsigned short keyEventCharWithoutShiftKey; BOOL requiresCmdKeyModifier; } _keData;
    unsigned int _options;
    struct { NSMenu *menu; unsigned long long indexInMenu; } _outVkeyMatch;
    struct { NSMenu *menu; unsigned long long indexInMenu; } _outCharMatch;
}

- (void).cxx_destruct;
- (BOOL)includesDisabledItems;
- (BOOL)isQueryOnly;
- (BOOL)ignoresSubmenus;
- (BOOL)isSimpleCheck;
- (BOOL)includesUncountedItems;
- (BOOL)excludesNSMenus;
- (BOOL)requiresCmdKey;
- (unsigned int)altChar;
- (unsigned int)charWithoutCmd;
- (unsigned int)charWithoutShift;

@end
