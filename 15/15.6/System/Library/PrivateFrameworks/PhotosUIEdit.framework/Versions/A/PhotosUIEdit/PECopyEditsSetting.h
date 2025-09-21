@class NSString, NSArray;

@interface PECopyEditsSetting : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSArray *compositionKeys;
@property (nonatomic) char enabled;

+ (id)allSettings;
+ (char)_isSettingIdentifierEnabledByDefault:(unsigned long long)a0;

- (id)initWithIdentifier:(unsigned long long)a0;
- (char)isApplicableToCompositionController:(id)a0 asset:(id)a1;

@end
