@interface WindowManager.WindowManagerXPCTilingPositionRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ positionBox;
    void /* unknown type, empty encoding */ targetBox;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
