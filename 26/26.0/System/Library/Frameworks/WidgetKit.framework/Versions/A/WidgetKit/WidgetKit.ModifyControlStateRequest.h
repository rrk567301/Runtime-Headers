@interface WidgetKit.ModifyControlStateRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
