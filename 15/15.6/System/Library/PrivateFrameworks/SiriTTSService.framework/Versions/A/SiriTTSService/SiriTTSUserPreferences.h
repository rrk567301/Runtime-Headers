@class NSString;

@interface SiriTTSUserPreferences : NSObject

@property (class, nonatomic, readonly) NSString *spokenLanguageChangedNotification;

+ (void)setLogging:(char)a0;
+ (id)defaultOutputLanguageIdentifier;
+ (id)getAvailableLanguageIdentifiers;
+ (char)getLogging;
+ (id)getSpokenLanguageIdentifier;
+ (void)setSpokenLanguageIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
