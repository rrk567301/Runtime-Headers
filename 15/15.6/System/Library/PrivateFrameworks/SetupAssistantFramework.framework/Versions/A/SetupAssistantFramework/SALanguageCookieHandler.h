@class NSArray;

@interface SALanguageCookieHandler : NSObject

@property (retain) NSArray *guessedCountries;
@property char usingVoiceOver;

- (void).cxx_destruct;
- (id)initReadingFile:(char)a0;
- (void)readValuesFromCookieFile;
- (void)writeValuesToCookieFile;

@end
