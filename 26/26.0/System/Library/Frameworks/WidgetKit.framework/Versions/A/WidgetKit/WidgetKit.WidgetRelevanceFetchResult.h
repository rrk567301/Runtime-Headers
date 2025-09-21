@interface WidgetKit.WidgetRelevanceFetchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isDefaultImplementation;
    void /* unknown type, empty encoding */ widgetRelevances;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
