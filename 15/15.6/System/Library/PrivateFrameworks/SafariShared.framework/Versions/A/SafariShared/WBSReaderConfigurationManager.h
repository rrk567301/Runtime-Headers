@class NSDictionary, NSMutableDictionary, WBSReaderFontManager;

@interface WBSReaderConfigurationManager : NSObject {
    long long _theme;
    long long _darkModeTheme;
    NSMutableDictionary *_fontFamilyNameForLanguageTag;
    char _prefersLargerDefaultFontSize;
}

@property (readonly, nonatomic) NSDictionary *configurationToSave;
@property (readonly, nonatomic) NSDictionary *configurationToSendToWebPage;
@property (nonatomic) char javaScriptEnabled;
@property (nonatomic) char darkModeEnabled;
@property (readonly, nonatomic) char canMakeTextBigger;
@property (readonly, nonatomic) char canMakeTextSmaller;
@property (readonly, nonatomic) char resettingTextSizeWouldHaveEffect;
@property (readonly, nonatomic) WBSReaderFontManager *fontManager;
@property (readonly, nonatomic) long long effectiveTextZoomIndex;
@property (nonatomic) long long textZoomIndex;

- (void).cxx_destruct;
- (void)makeTextSmaller;
- (long long)_defaultTextZoomIndex;
- (long long)_defaultThemeForAppearance:(long long)a0;
- (void)_migrateToVersion5IfNecessary;
- (id)fontForLanguageTag:(id)a0;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)a0 fontManager:(id)a1;
- (id)initWithPersistedSettingsAsDictionaryRepresentation:(id)a0 fontManager:(id)a1 prefersLargerDefaultFontSize:(char)a2;
- (void)makeTextBigger;
- (void)resetTextSize;
- (void)setFont:(id)a0 forLanguageTag:(id)a1;
- (void)setTheme:(long long)a0 forAppearance:(long long)a1;
- (long long)themeForAppearance:(long long)a0;

@end
