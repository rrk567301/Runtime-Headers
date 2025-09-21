@interface SEService.DeviceCapability : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsUWB;
}

@property (class, nonatomic) char supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
