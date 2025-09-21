@class NSArray, NSString, NSUUID, RPCompanionLinkDevice, NSMutableArray, RPCompanionLinkClient;

@interface CCRapportDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (readonly, nonatomic) NSArray *serviceTypes;
@property (nonatomic) unsigned long long linkState;
@property (readonly) NSString *rapportIdentifier;
@property (retain) NSUUID *cascadeDeviceUUID;
@property (retain) RPCompanionLinkDevice *device;
@property (retain) RPCompanionLinkClient *client;
@property (readonly) long long platform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)model;
- (void)encodeWithCoder:(id)a0;
- (id)prefix;
- (id)description;
- (id)name;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)handleInvalidationWithError:(id)a0;
- (id)initWithRPCompanionLinkDevice:(id)a0;
- (void)invalidateClientWithError:(id)a0;

@end
