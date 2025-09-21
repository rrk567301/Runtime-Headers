@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject

@property (readonly, nonatomic) unsigned long long status;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(unsigned long long)a0;

@end
