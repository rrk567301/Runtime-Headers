@class NSArray, NSMutableArray;

@interface SOHotKeyManager : NSObject {
    unsigned int _ourCGSConnectionID;
    NSMutableArray *_registeredHotKeyArray;
    NSArray *_cachedSymbolicHotKeyTable;
    unsigned int _ioConnection;
}

+ (id)defaultHotKeyManager;

- (id)init;
- (void)delete;
- (BOOL)stickyKeysIsEnabled;
- (unsigned int)findConflictingSymbolicHotKeyFor:(unsigned int)a0;
- (void)gotoKbdPref;
- (unsigned int)sharedCGSConnectionID;
- (BOOL)unregisterAllHotKeys;
- (unsigned int)_IOConnection;
- (id)symbolicHotKeys;
- (BOOL)registerVirtualKeyCode:(unsigned short)a0 modifierKeyFlags:(unsigned int)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (BOOL)unregisterVirtualKeyCode:(unsigned short)a0 modifierKeyFlags:(unsigned int)a1;

@end
