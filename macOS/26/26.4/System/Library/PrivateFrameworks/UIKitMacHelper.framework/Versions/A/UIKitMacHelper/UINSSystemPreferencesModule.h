@class NSViewController;

@interface UINSSystemPreferencesModule : UINSPreferencesModule {
    NSViewController *_rootViewController;
}

@property (class, readonly) BOOL hasSystemPreferences;

- (void).cxx_destruct;
- (id)init;

@end
