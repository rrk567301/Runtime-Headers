@class NSString;

@interface WidgetKit.DescriptorFetchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widgetDescriptors;
    void /* unknown type, empty encoding */ controlDescriptors;
    void /* unknown type, empty encoding */ activityDescriptors;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
