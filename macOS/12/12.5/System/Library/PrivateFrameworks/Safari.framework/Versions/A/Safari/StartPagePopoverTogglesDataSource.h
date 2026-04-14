@class NSArray, NSString;

@interface StartPagePopoverTogglesDataSource : NSObject

@property (class, readonly, nonatomic) long long numberOfRows;
@property (class, readonly, nonatomic) BOOL hasAnySectionEnabled;
@property (class, readonly, nonatomic) NSArray *orderOfStartPageSections;

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, copy, nonatomic) NSString *preferenceKey;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSString *onStateAccessibilityLabel;
@property (readonly, copy, nonatomic) NSString *offStateAccessibilityLabel;

+ (id)startPagePopoverTogglesDataSourceWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4 onStateAccessibilityLabel:(id)a5 offStateAccessibilityLabel:(id)a6;
+ (BOOL)_hasSyncedCloudTabDevices;
+ (id)startPagePopoverTogglesDataSourceWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4;
+ (id)dataWithRowIndex:(long long)a0;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4;
- (id)initWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 preferenceKey:(id)a3 accessibilityLabel:(id)a4 onStateAccessibilityLabel:(id)a5 offStateAccessibilityLabel:(id)a6;

@end
