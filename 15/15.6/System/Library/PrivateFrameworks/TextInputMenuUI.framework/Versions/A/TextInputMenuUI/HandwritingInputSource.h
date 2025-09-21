@class NSArray, NSString;

@interface HandwritingInputSource : CPInputSource

@property (readonly, retain) NSArray *supportedLanguages;
@property (retain) NSArray *enabledLanguages;
@property (retain) NSString *selectedLanguage;

+ (id)HIToolboxUserDefaults;

- (char)isEnabled;
- (void)enable;
- (char)isSelected;
- (char)activateForciblyWithMethod:(long long)a0 sender:(id)a1;
- (id)localizedInputSourceNameForLanguage:(id)a0;

@end
