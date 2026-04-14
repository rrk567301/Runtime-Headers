@interface SCUpdateUpsellAppLaunchCountCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ upsellAppLaunchCount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;

@end
