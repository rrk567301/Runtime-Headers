@class NSUUID, NSString, NSData, NSDate;

@interface NDFNetworkDevice : NSManagedObject

@property (nonatomic) short designatedDeviceReachability;
@property (nonatomic, copy) NSUUID *deviceIdentifier;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic) short deviceRole;
@property (nonatomic, copy) NSUUID *homeKitGroupIdentifier;
@property (nonatomic) short nwNATCount;
@property (nonatomic) long long nwNetworkProperties;
@property (nonatomic, copy) NSString *nwObscuredSSID;
@property (nonatomic, copy) NSData *nwSignatureIPv4;
@property (nonatomic, copy) NSData *nwSignatureIPv6;
@property (nonatomic) short recordVersion;
@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
