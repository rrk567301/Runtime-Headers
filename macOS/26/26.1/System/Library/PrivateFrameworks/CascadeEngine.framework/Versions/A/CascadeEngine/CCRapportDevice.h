@class NSArray, NSString, NSUUID, RPCompanionLinkDevice, NSMutableArray, RPCompanionLinkClient;

@interface CCRapportDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (readonly, nonatomic) NSArray *serviceTypes;
@property (nonatomic) unsigned long long linkState;
@property (readonly) NSString *rapportIdentifier;
@property (retain) NSUUID *cascadeDeviceUUID;
@property (retain) RPCompanionLinkDevice *device;
@property (retain) RPCompanionLinkClient *client;
@property (readonly) long long platform;

- (id)prefix;
- (unsigned long long)hash;
- (id)model;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (void)handleInvalidationWithError:(id)a0;
- (id)initWithRPCompanionLinkDevice:(id)a0;
- (void)invalidateClientWithError:(id)a0;

@end
