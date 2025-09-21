@class NSString, GEOObserverHashTable, MNUserOptions;

@interface MNUserOptionsEngine : NSObject {
    GEOObserverHashTable *_observers;
    NSString *_navSessionLanguage;
}

@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNUserOptions *options;

+ (id)sharedInstance;

- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)updateNavigationSessionLanguage:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (void)update:(id)a0;
- (void).cxx_destruct;

@end
