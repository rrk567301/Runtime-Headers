@class NSString;

@interface WidgetKit.DescriptorFetchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widgetDescriptors;
    void /* unknown type, empty encoding */ controlDescriptors;
    void /* unknown type, empty encoding */ activityDescriptors;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
