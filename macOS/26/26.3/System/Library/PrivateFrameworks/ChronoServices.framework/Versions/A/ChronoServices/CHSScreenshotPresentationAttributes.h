@class CHSWidgetTintParameters, NSDateComponents, NSString;

@interface CHSScreenshotPresentationAttributes : NSObject

@property (readonly, nonatomic) long long colorScheme;
@property (readonly, nonatomic) BOOL allowsPrivacySensitiveContent;
@property (readonly, nonatomic) BOOL userWantsWidgetDataWhenPasscodeLocked;
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (readonly, copy, nonatomic) NSDateComponents *idealizedDateComponents;
@property (readonly, copy, nonatomic) NSString *additionalSettingsContext;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
