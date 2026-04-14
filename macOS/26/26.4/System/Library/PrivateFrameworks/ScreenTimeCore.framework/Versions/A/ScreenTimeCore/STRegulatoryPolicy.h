@class STRegulatoryWebContentFilterPolicy, STRegulatoryAllowedAppsPolicy, STRegulatoryContentPrivacyRestrictionsPolicy, NSArray, NSString, STRegulatoryCommSafetyPolicy;

@interface STRegulatoryPolicy : NSObject

@property (retain) STRegulatoryCommSafetyPolicy *commSafety;
@property (retain) STRegulatoryWebContentFilterPolicy *webContentFilter;
@property (retain) STRegulatoryAllowedAppsPolicy *allowedApps;
@property (retain) STRegulatoryContentPrivacyRestrictionsPolicy *contentRestrictions;
@property (copy) NSArray *topLevelRestrictionsValueChangePrompts;
@property (copy) NSString *regulatoryRegionAACID;

- (void).cxx_destruct;
- (id)init;

@end
