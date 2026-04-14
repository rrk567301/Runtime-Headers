@interface MediaContinuityKit.MediaContinuityUsageSecureCodingWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ wrappedValue;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
