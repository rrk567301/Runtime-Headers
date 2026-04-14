@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;

@end
