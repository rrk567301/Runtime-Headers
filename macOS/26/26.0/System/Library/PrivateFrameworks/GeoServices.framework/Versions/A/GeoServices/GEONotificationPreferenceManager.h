@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (void)reset;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;
- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
