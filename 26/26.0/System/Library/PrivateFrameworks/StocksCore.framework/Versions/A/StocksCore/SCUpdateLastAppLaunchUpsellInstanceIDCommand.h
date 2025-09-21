@interface SCUpdateLastAppLaunchUpsellInstanceIDCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ lastAppLaunchUpsellInstanceID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)executeWithZone:(id)a0;

@end
