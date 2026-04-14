@class NSArray;

@interface IDSDestinationComposite : IDSDestination

@property (readonly, nonatomic) NSArray *destinations;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDestinations:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)destinationLightweightStatus;

@end
