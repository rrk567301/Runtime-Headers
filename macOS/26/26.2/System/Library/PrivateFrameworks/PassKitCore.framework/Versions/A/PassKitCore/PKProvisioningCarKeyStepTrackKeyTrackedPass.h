@interface PKProvisioningCarKeyStepTrackKeyTrackedPass : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ passURL;
    void /* unknown type, empty encoding */ subcredential;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
