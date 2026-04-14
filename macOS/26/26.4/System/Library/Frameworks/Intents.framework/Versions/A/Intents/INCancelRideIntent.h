@class NSString;

@interface INCancelRideIntent : INIntent

@property (readonly, copy) NSString *rideIdentifier;

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRideIdentifier:(id)a0;

@end
