@class NSString, NSArray, MOBookmarkSourceArraySettingMetadata, MOWebNewPageSettingMetadata, MOWebNewPage, MOBoolSettingMetadata, NSNumber, MOStringSettingMetadata;

@interface MOSafariSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOStringSettingMetadata *cookiePolicyMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAutoFillMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyHistoryClearingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyJavaScriptMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyPopupsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyPrivateBrowsingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySafariMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySummaryMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *forceFraudWarningMetadata;
@property (class, readonly, nonatomic) MOBookmarkSourceArraySettingMetadata *managedBookmarksMetadata;
@property (class, readonly, nonatomic) MOWebNewPageSettingMetadata *newTabStartPageMetadata;

@property (retain, nonatomic) NSString *cookiePolicy;
@property (retain, nonatomic) NSNumber *denyAutoFill;
@property (retain, nonatomic) NSNumber *denyHistoryClearing;
@property (retain, nonatomic) NSNumber *denyJavaScript;
@property (retain, nonatomic) NSNumber *denyPopups;
@property (retain, nonatomic) NSNumber *denyPrivateBrowsing;
@property (retain, nonatomic) NSNumber *denySafari;
@property (retain, nonatomic) NSNumber *denySummary;
@property (retain, nonatomic) NSNumber *forceFraudWarning;
@property (retain, nonatomic) NSArray *managedBookmarks;
@property (retain, nonatomic) MOWebNewPage *newTabStartPage;

+ (id)groupName;

@end
