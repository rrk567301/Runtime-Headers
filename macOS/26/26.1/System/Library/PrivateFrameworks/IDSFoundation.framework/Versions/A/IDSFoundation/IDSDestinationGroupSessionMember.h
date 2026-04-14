@class NSString, IDSURI;

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) IDSURI *URIObject;
@property (readonly, nonatomic) BOOL isLightWeight;

+ (BOOL)supportsSecureCoding;

- (id)initWithURI:(id)a0;
- (id)destinationURIs;
- (BOOL)isDevice;
- (id)destinationLightweightStatus;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithURI:(id)a0 isLightWeight:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURIObject:(id)a0 isLightWeight:(BOOL)a1;

@end
