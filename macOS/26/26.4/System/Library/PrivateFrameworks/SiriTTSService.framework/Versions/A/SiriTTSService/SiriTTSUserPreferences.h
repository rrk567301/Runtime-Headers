@class NSString;

@interface SiriTTSUserPreferences : NSObject

@property (class, nonatomic, readonly) NSString *spokenLanguageChangedNotification;

+ (void)setLogging:(BOOL)a0;
+ (id)getAvailableLanguageIdentifiers;
+ (id)defaultOutputLanguageIdentifier;
+ (BOOL)getLogging;
+ (id)getSpokenLanguageIdentifier;
+ (void)setSpokenLanguageIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
