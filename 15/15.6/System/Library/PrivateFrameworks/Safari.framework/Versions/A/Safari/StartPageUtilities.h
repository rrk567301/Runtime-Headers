@class NSArray;

@interface StartPageUtilities : NSObject

@property (class, readonly, copy, nonatomic) NSArray *preferenceKeys;

+ (char)isEnabledForSectionWithIdentifier:(id)a0 sectionManager:(id)a1 profileIdentifier:(id)a2;
+ (id)legacyPreferenceKeyForSectionIdentifier:(id)a0;
+ (id)preferenceKeyForCustomizationIdentifier:(id)a0;
+ (void)setEnabled:(char)a0 forSectionWithIdentifier:(id)a1 sectionManager:(id)a2 profileIdentifier:(id)a3;

@end
