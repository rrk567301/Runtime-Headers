@class CHSWidgetTintParameters, NSString;

@interface CHSMutableScreenshotPresentationAttributes : CHSScreenshotPresentationAttributes

@property (nonatomic) long long colorScheme;
@property (nonatomic) char allowsPrivacySensitiveContent;
@property (nonatomic) char userWantsWidgetDataWhenPasscodeLocked;
@property (copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (copy, nonatomic) NSString *additionalSettingsContext;

- (void)setColorScheme:(long long)a0;
- (void)setAdditionalSettingsContext:(id)a0;
- (void)setAllowsPrivacySensitiveContent:(char)a0;
- (void)setTintParameters:(id)a0;
- (void)setUserWantsWidgetDataWhenPasscodeLocked:(char)a0;

@end
