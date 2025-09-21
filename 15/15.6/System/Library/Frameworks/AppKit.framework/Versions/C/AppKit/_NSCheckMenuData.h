@class _NSMenuKeyResults;

@interface _NSCheckMenuData : NSObject {
    char _isEventKeyValid;
    char _isAutoRepeatEvent;
    char _needsCaching;
    char _recordResults;
    unsigned int _menuDepth;
    unsigned int _initialContext;
    struct OpaqueEventRef { } *_keyEvent;
    double _eventTime;
    unsigned long long _eventRawModifiers;
    unsigned long long _eventModifiers;
    unsigned long long _virtualKeyEventModifiers;
    unsigned long long _eventKey;
    unsigned long long _eventChar;
    struct { unsigned short keyEventAltCharacter; unsigned short keyEventCharWithoutCmdKey; unsigned short keyEventCharWithoutShiftKey; char requiresCmdKeyModifier; } _keData;
    unsigned int _options;
    _NSMenuKeyResults *_virtualKeyMatch;
    _NSMenuKeyResults *_charCodeMatch;
}

- (void).cxx_destruct;
- (char)ignoresSubmenus;
- (unsigned long long)altChar;
- (char)excludesNSMenus;
- (unsigned long long)charWithoutCmd;
- (unsigned long long)charWithoutShift;
- (char)includesDisabledItems;
- (char)includesUncountedItems;
- (char)isQueryOnly;
- (char)isSimpleCheck;
- (char)requiresCmdKey;

@end
