@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (BOOL)isEnabledForSubTestWithName:(id)a0;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;
- (void)reset;
- (void).cxx_destruct;
- (id)init;

@end
