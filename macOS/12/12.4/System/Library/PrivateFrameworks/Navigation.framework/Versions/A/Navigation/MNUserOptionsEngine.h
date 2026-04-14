@class MNUserOptions, NSString, NSBundle, MNObserverHashTable;

@interface MNUserOptionsEngine : NSObject {
    NSBundle *_spokenBundle;
    MNObserverHashTable *_observers;
    NSString *_navSessionLanguage;
}

@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNUserOptions *options;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (void)update:(id)a0;
- (void)_updateSpokenBundle;
- (void)updateNavigationSessionLanguage:(id)a0;

@end
