@class NSString, IDSURI;

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) IDSURI *URIObject;
@property (readonly, nonatomic) BOOL isLightWeight;

+ (BOOL)supportsSecureCoding;

- (id)initWithURI:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDevice;
- (id)destinationLightweightStatus;
- (id)description;
- (id)initWithURIObject:(id)a0 isLightWeight:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithURI:(id)a0 isLightWeight:(BOOL)a1;
- (id)destinationURIs;
- (void).cxx_destruct;

@end
