@class NSString, NSArray;

@interface ELSWhitelistEntry : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *parameterName;
@property (retain, nonatomic) NSString *displayNameLocalizationKey;
@property (retain, nonatomic) NSString *descriptionLocalizationKey;
@property (readonly, nonatomic) NSString *sensitiveInformationLocalizationKey;
@property (readonly, nonatomic) NSArray *platformAvailability;
@property (readonly, nonatomic) char requiresFollowup;
@property (readonly, nonatomic) char retry;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 parameterName:(id)a1 baseLocalizationKey:(id)a2 needsWAPIKeys:(char)a3 requiresFollowup:(char)a4 retry:(char)a5 platforms:(id)a6;
- (id)initWithBundleIdentifier:(id)a0 parameterName:(id)a1 displayNameLocalizationKey:(id)a2 descriptionLocalizationKey:(id)a3 sensitiveInformationLocalizationKey:(id)a4 needsWAPIKeys:(char)a5 requiresFollowup:(char)a6 retry:(char)a7 platforms:(id)a8;

@end
