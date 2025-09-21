@class NSString;

@interface INCancelRideIntent : INIntent

@property (readonly, copy) NSString *rideIdentifier;

+ (char)supportsSecureCoding;
+ (id)intentDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithRideIdentifier:(id)a0;

@end
