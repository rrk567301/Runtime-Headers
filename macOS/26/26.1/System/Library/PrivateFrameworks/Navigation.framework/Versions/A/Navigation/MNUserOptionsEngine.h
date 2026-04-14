@class NSString, GEOObserverHashTable, MNUserOptions;

@interface MNUserOptionsEngine : NSObject {
    GEOObserverHashTable *_observers;
    NSString *_navSessionLanguage;
}

@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNUserOptions *options;

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)a0;
- (void)update:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)updateNavigationSessionLanguage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
