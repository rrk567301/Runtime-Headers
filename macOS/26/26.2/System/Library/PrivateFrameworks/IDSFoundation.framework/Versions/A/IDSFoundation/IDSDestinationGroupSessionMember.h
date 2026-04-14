@class NSString, IDSURI;

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) IDSURI *URIObject;
@property (readonly, nonatomic) BOOL isLightWeight;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)initWithCoder:(id)a0;
- (BOOL)isDevice;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURI:(id)a0 isLightWeight:(BOOL)a1;
- (id)initWithURIObject:(id)a0 isLightWeight:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (id)destinationLightweightStatus;
- (id)initWithURI:(id)a0;

@end
