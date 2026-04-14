@class NSString;

@interface INCancelRideIntent : INIntent

@property (readonly, copy) NSString *rideIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRideIdentifier:(id)a0;

@end
