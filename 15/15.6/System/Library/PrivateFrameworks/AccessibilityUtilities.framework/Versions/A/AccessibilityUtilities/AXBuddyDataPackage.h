@class NSDictionary, NSString;

@interface AXBuddyDataPackage : NSObject <NSSecureCoding>

@property (class, retain, nonatomic) NSDictionary *testData;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *accessibilityOptions;
@property (retain, nonatomic) NSString *axOSVersion;
@property (retain, nonatomic) NSString *axModel;
@property (nonatomic) char hasHomeButton;
@property (retain, nonatomic) NSString *axPreferredContentSizeCategoryName;
@property (nonatomic) char usesExtendedSlider;

+ (id)dataBlobForBuddy;
+ (void)restoreDataBlobForBuddy:(id)a0;
+ (id)dataPackageForCurrentSettings;
+ (id)deviceClassForBuddy;
+ (id)productVersionForBuddy;
+ (void)setTestData:(id)a0 forModel:(id)a1 hasHomeButton:(char)a2 largeTextUsesExtendedRange:(char)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applySavedSettings;
- (void)applySavedSettings_macOS;
- (void)processDomainDictionary:(id)a0;

@end
