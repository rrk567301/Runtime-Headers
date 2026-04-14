@interface WindowManager.WindowManagerXPCTilingPositionRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ positionBox;
    void /* unknown type, empty encoding */ targetBox;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
