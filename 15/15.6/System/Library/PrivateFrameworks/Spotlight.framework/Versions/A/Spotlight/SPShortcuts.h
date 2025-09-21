@class NSMutableDictionary;

@interface SPShortcuts : NSObject {
    NSMutableDictionary *_userShortcutsDictionary;
    char _isShortcutDictChanged;
}

+ (id)pathToShortcuts;
+ (id)defaultShortcuts;
+ (id)deprecatedPathWithComponent:(id)a0;
+ (id)pathWithComponent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)URLStringForUserShortcut:(id)a0;
- (void)deleteMigrationFile;
- (id)dictionaryForUserShortcut:(id)a0;
- (void)dumpShortcuts;
- (void)migrateShortcuts;
- (char)needsShortcutsMigration;
- (void)rememberForUniqueIdentifier:(id)a0 forUserShortcut:(id)a1 date:(id)a2 forceReload:(char)a3;
- (void)rememberResult:(id)a0 forUserShortcut:(id)a1 isAdvancedQuery:(char)a2;
- (void)removeShortcutsResultForShortcutString:(id)a0;
- (id)resultForUserShortcut:(id)a0;
- (char)validateShortCutsLocked;

@end
