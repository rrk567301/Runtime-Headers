@interface SASProximityHandshake : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long platformType;
@property char hasPasscodeSet;
@property int simplePasscodeType;
@property int unlockType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadInformation;

@end
