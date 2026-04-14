@interface PasswordsPreferences : PreferencesModule

@property (class, readonly, nonatomic) BOOL canOpenGeneratedPasswords;

+ (id)sharedInstance;
+ (void)registerDefaults;

- (id)imageForPreferenceNamed:(id)a0;
- (id)preferencesNibName;
- (void)openGeneratedPasswords;
- (void)openWithOTPAuthURL:(id)a0 onPageWithURL:(id)a1;
- (void)openWithPasswordManagerURL:(id)a0;
- (BOOL)snapshotsOfPreferencesWindowArePermitted;

@end
