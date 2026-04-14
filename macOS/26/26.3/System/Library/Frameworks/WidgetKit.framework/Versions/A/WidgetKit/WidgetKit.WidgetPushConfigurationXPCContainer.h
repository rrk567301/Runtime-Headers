@interface WidgetKit.WidgetPushConfigurationXPCContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widgets;
    void /* unknown type, empty encoding */ token;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
