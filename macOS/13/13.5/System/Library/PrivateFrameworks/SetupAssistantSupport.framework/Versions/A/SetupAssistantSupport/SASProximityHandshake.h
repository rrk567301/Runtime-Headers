@interface SASProximityHandshake : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long platformType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadInformation;

@end
