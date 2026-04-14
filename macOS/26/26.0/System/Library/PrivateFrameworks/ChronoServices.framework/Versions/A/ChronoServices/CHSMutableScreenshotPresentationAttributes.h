@class CHSWidgetTintParameters, NSDateComponents, NSString;

@interface CHSMutableScreenshotPresentationAttributes : CHSScreenshotPresentationAttributes

@property (nonatomic) long long colorScheme;
@property (nonatomic) BOOL allowsPrivacySensitiveContent;
@property (nonatomic) BOOL userWantsWidgetDataWhenPasscodeLocked;
@property (copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (copy, nonatomic) NSDateComponents *idealizedDateComponents;
@property (copy, nonatomic) NSString *additionalSettingsContext;

- (void)setIdealizedDateComponents:(id)a0;
- (void)setColorScheme:(long long)a0;
- (void)setAllowsPrivacySensitiveContent:(BOOL)a0;
- (void)setAdditionalSettingsContext:(id)a0;
- (void)setUserWantsWidgetDataWhenPasscodeLocked:(BOOL)a0;
- (void)setTintParameters:(id)a0;

@end
