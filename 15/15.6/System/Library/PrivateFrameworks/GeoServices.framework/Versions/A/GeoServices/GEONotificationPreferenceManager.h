@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (char)isEnabledForSubTestWithName:(id)a0;
- (void)setEnabled:(char)a0 forSubTestWithName:(id)a1;

@end
