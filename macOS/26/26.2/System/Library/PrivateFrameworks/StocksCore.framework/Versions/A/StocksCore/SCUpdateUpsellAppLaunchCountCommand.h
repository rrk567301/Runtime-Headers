@interface SCUpdateUpsellAppLaunchCountCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ upsellAppLaunchCount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)executeWithZone:(id)a0;

@end
