@interface SCUpdateLastAppLaunchUpsellInstanceIDCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ lastAppLaunchUpsellInstanceID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;

@end
