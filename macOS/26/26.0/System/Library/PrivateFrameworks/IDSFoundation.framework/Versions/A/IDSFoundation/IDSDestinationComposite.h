@class NSArray;

@interface IDSDestinationComposite : IDSDestination

@property (readonly, nonatomic) NSArray *destinations;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)destinationLightweightStatus;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)destinationURIs;
- (void).cxx_destruct;
- (id)initWithDestinations:(id)a0;

@end
