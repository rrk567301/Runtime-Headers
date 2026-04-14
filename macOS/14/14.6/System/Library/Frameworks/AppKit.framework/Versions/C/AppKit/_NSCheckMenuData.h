@class _NSMenuKeyResults;

@interface _NSCheckMenuData : NSObject {
    BOOL _isEventKeyValid;
    BOOL _isAutoRepeatEvent;
    BOOL _needsCaching;
    BOOL _recordResults;
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
    _NSMenuKeyResults *_virtualKeyMatch;
    _NSMenuKeyResults *_charCodeMatch;
}

- (void).cxx_destruct;
- (BOOL)ignoresSubmenus;
- (unsigned int)altChar;
- (BOOL)excludesNSMenus;
- (unsigned int)charWithoutCmd;
- (unsigned int)charWithoutShift;
- (BOOL)includesDisabledItems;
- (BOOL)includesUncountedItems;
- (BOOL)isQueryOnly;
- (BOOL)isSimpleCheck;
- (BOOL)requiresCmdKey;

@end
