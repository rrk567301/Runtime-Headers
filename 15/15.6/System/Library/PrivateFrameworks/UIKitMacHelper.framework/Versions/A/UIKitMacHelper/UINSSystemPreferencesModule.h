@class NSViewController;

@interface UINSSystemPreferencesModule : UINSPreferencesModule {
    NSViewController *_rootViewController;
}

@property (class, readonly) char hasSystemPreferences;

- (id)init;
- (void).cxx_destruct;

@end
