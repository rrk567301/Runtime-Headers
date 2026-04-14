@class MOApplicationCategoryShieldPolicy, NSSet, MOApplicationSetSettingMetadata, MOApplicationCategoryShieldPolicySettingMetadata, MOWebDomainCategoryShieldPolicy, MOWebDomainCategoryShieldPolicySettingMetadata, MOWebDomainSetSettingMetadata;

@interface MOShieldSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOApplicationSetSettingMetadata *applicationsMetadata;
@property (class, readonly, retain, nonatomic) MOApplicationCategoryShieldPolicySettingMetadata *applicationCategoriesMetadata;
@property (class, readonly, retain, nonatomic) MOWebDomainSetSettingMetadata *webDomainsMetadata;
@property (class, readonly, retain, nonatomic) MOWebDomainCategoryShieldPolicySettingMetadata *webDomainCategoriesMetadata;

@property (retain, nonatomic) NSSet *applications;
@property (retain, nonatomic) MOApplicationCategoryShieldPolicy *applicationCategories;
@property (retain, nonatomic) NSSet *webDomains;
@property (retain, nonatomic) MOWebDomainCategoryShieldPolicy *webDomainCategories;

+ (id)groupName;

@end
