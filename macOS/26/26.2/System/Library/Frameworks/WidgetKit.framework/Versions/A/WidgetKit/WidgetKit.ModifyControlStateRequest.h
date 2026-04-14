@interface WidgetKit.ModifyControlStateRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
