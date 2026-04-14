@class NSString;

@interface StartPagePopoverTogglesDataSource : NSObject

@property (class, readonly, nonatomic) long long numberOfTabGroupRows;
@property (class, readonly, nonatomic) long long numberOfRows;

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, copy, nonatomic) NSString *preferenceKey;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSString *onStateAccessibilityLabel;
@property (readonly, copy, nonatomic) NSString *offStateAccessibilityLabel;
@property (readonly, nonatomic) BOOL isSeparator;

+ (id)_getRecentlyClosedTabsDataSource;
+ (BOOL)_hasSyncedCloudTabDevicesForProfileWithIdentifierString:(id)a0;
+ (id)_stringArrayFromStartPageManagerSectionDescriptor:(id)a0;
+ (id)dataWithRowIndex:(long long)a0 forProfileWithIdentifier:(id)a1;
+ (BOOL)hasAnySectionEnabledForProfileWithIdentifier:(id)a0;
+ (id)orderOfStartPageSectionsForProfileIdentifier:(id)a0;
+ (id)startPagePopoverTogglesDataSourceWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4;
+ (id)startPagePopoverTogglesDataSourceWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4 onStateAccessibilityLabel:(id)a5 offStateAccessibilityLabel:(id)a6;
+ (id)tabGroupDataWithRowIndex:(long long)a0;

- (void).cxx_destruct;
- (id)initSeparatorDataSource;
- (id)initWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4;
- (id)initWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4 onStateAccessibilityLabel:(id)a5 offStateAccessibilityLabel:(id)a6;

@end
