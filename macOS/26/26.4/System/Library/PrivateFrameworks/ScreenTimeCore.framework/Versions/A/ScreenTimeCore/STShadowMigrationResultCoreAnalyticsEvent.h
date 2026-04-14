@class NSString, NSDictionary;

@interface STShadowMigrationResultCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) BOOL isShareAcrossDevicesEnabled;
@property (readonly) BOOL isManaged;
@property (readonly) BOOL isChildAccount;
@property (readonly) BOOL hasPasscode;
@property (readonly) BOOL isAppAndWebsiteActivityEnabled;
@property (readonly) BOOL hasRestrictionsEnabled;
@property (readonly) BOOL hasAppInstallRestrictions;
@property (readonly) BOOL hasAppUninstallRestrictions;
@property (readonly) BOOL hasInAppPurchaseRestrictions;
@property (readonly) BOOL hasAppStorePasscodeRestrictions;
@property (readonly) BOOL hasIntelligenceAndSiriRestrictions;
@property (readonly) BOOL hasAskToBuyEnabled;
@property (readonly) BOOL hasLimitsEnabled;
@property (readonly) long long numberOfAppLimits;
@property (readonly) BOOL hasLimitWithCustomSchedule;
@property (readonly) BOOL hasLimitWithBlockEnabled;
@property (readonly) BOOL hasAppInMoreThanOneLimit;
@property (readonly) BOOL hasAlwaysAllowedAppInLimit;
@property (readonly) BOOL hasCategoryLimits;
@property (readonly) BOOL hasAllAppsAndCategoriesLimit;
@property (readonly) BOOL hasSocialLimit;
@property (readonly) BOOL hasGamesLimit;
@property (readonly) BOOL hasEntertainmentLimit;
@property (readonly) BOOL hasCreativityLimit;
@property (readonly) BOOL hasProductivityAndFinanceLimit;
@property (readonly) BOOL hasEducationLimit;
@property (readonly) BOOL hasInformationAndReadingLimit;
@property (readonly) BOOL hasHealthAndFitnessLimit;
@property (readonly) BOOL hasUtilitiesLimit;
@property (readonly) BOOL hasShoppingAndFoodLimit;
@property (readonly) BOOL hasTravelLimit;
@property (readonly) BOOL hasDowntimeEnabled;
@property (readonly) BOOL hasDowntimeWithCustomSchedule;
@property (readonly) BOOL hasDowntimeWithBlockEnabled;
@property (readonly) BOOL isDowntimeOvernight;
@property (readonly) BOOL isDowntimeDifferentForWeekendsAndWeekdays;
@property (readonly) BOOL hasCommunicationLimits;
@property (readonly) BOOL hasiCloudContactsEnabled;
@property (readonly) BOOL hasManagedContacts;
@property (readonly) long long result;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
