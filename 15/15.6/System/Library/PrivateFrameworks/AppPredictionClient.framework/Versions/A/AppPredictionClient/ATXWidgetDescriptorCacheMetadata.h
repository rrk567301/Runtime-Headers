@class NSString, NSDate;

@interface ATXWidgetDescriptorCacheMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *installDate;
@property (readonly, nonatomic) NSString *containerBundleId;
@property (readonly, nonatomic) char hasHomeScreenWidgetFamiliesOnly;
@property (readonly, nonatomic) char hasAccessoryWidgetFamiliesOnly;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInstallDate:(id)a0 containerBundleId:(id)a1 hasHomeScreenWidgetFamiliesOnly:(char)a2 hasAccessoryWidgetFamiliesOnly:(char)a3;
- (char)isEqualToATXWidgetDescriptorCacheMetadata:(id)a0;

@end
