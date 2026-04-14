@class IDSURI;

@interface IDSDestinationDevice : IDSDestination

@property (retain, nonatomic) IDSURI *destinationURI;
@property (nonatomic) BOOL isGuest;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isDeviceURI:(id)a0;

- (BOOL)isDevice;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRapportPublicIdentifierURI:(id)a0;
- (id)initWithDeviceURI:(id)a0;
- (id)initWithURI:(id)a0 isGuest:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIDSDeviceURI:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
