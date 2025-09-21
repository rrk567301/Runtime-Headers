@class CHSWidgetTintParameters, NSString;

@interface CHSScreenshotPresentationAttributes : NSObject

@property (readonly, nonatomic) long long colorScheme;
@property (readonly, nonatomic) char allowsPrivacySensitiveContent;
@property (readonly, nonatomic) char userWantsWidgetDataWhenPasscodeLocked;
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (readonly, copy, nonatomic) NSString *additionalSettingsContext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
