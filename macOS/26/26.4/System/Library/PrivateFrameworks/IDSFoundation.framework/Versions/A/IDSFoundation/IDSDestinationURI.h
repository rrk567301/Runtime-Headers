@class IDSURI;

@interface IDSDestinationURI : IDSDestination

@property (readonly, nonatomic) IDSURI *uri;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)initWithURI:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURIString:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)destinationLightweightStatus;

@end
