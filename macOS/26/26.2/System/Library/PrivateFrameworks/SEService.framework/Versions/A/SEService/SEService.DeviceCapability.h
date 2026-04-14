@interface SEService.DeviceCapability : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsUWB;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
