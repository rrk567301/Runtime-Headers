@class NSUUID, NSString, NSData, NSDate;

@interface NDFDeviceRecord : NSManagedObject

@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSUUID *deviceID;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSUUID *homeKitGroupID;
@property (copy, nonatomic) NSData *nwSignatureIPv4;
@property (copy, nonatomic) NSData *nwSignatureIPv6;
@property (copy, nonatomic) NSString *nwObscuredSSID;
@property (nonatomic) BOOL isHomeKitPrimaryResident;
@property (nonatomic) BOOL canReachHomeKitPrimaryResident;
@property (nonatomic) long long nwNetworkProperties;
@property (nonatomic) short nwNATCount;

+ (id)fetchRequest;

@end
