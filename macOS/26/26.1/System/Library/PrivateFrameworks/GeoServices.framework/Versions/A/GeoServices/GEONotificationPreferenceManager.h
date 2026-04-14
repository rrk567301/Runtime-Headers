@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (void)reset;
- (void).cxx_destruct;
- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;
- (id)init;

@end
