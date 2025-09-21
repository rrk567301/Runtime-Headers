@interface FMDEraseOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char useObliteration;
@property (nonatomic) char brickDevice;
@property (nonatomic) double customDelay;
@property (nonatomic) double maxDelayInterval;
@property (nonatomic) char hasBridgeCoProcessor;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
