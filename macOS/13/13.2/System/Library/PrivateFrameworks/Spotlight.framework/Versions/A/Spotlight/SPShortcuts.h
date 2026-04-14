@class NSMutableDictionary;

@interface SPShortcuts : NSObject {
    NSMutableDictionary *_userShortcutsDictionary;
    BOOL _isShortcutDictChanged;
}

+ (id)pathWithComponent:(id)a0;
+ (id)pathToShortcuts;
+ (id)defaultShortcuts;

- (id)init;
- (void).cxx_destruct;
- (BOOL)needsShortcutsMigration;
- (void)deleteMigrationFile;
- (void)migrateShortcuts;
- (id)dictionaryForUserShortcut:(id)a0;
- (id)URLStringForUserShortcut:(id)a0;
- (id)resultForUserShortcut:(id)a0;
- (void)rememberForUniqueIdentifier:(id)a0 forUserShortcut:(id)a1 date:(id)a2 forceReload:(BOOL)a3;
- (void)rememberResult:(id)a0 forUserShortcut:(id)a1 isAdvancedQuery:(BOOL)a2;
- (void)removeShortcutsResultForShortcutString:(id)a0;
- (BOOL)validateShortCutsLocked;
- (void)dumpShortcuts;

@end
