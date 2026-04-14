@class NSString, IDSURI;

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) IDSURI *URIObject;
@property (readonly, nonatomic) BOOL isLightWeight;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURI:(id)a0;
- (id)destinationURIs;
- (id)destinationLightweightStatus;
- (BOOL)isDevice;
- (id)initWithURI:(id)a0 isLightWeight:(BOOL)a1;
- (id)initWithURIObject:(id)a0 isLightWeight:(BOOL)a1;

@end
