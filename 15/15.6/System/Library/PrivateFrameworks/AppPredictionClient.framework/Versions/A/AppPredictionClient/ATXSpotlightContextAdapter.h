@class NSDate;

@interface ATXSpotlightContextAdapter : NSObject {
    NSDate *_nowDate;
}

+ (char)isSpotlightRecentSectionIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_absoluteDateContextTitleWithSuggestion:(id)a0 eventTitle:(id)a1;
- (char)_hourIsOneWithDate:(id)a0;
- (id)_stringWithInterval:(double)a0;
- (id)contextCodeIdentifierWithSectionBundleIdentifier:(id)a0;
- (id)contextTitleWithSuggestion:(id)a0 eventTitle:(id)a1;
- (id)initWithNowDate:(id)a0;
- (char)isSportsGameSectionIdentifier:(id)a0;
- (id)nsuaSectionIdentifier;
- (id)sectionIdentifierForContextCode:(long long)a0;
- (id)topAutoShortcutSectionIdentifier;

@end
