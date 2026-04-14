@interface CoreIDVShared.IdentityGesture : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ gesture;
    void /* unknown type, empty encoding */ type;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
