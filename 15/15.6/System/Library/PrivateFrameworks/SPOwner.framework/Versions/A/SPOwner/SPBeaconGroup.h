@class NSUUID, NSSet, NSString, NSData, NSDictionary, SPLostModeInfo;

@interface SPBeaconGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long version;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSSet *beaconIdentifiers;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *macAddress;
@property (nonatomic) char isPairingComplete;
@property (nonatomic) char isClassicConnected;
@property (nonatomic) char isConnected;
@property (nonatomic) char isFindMyNetworkEnabled;
@property (nonatomic) long long status;
@property (nonatomic) long long classification;
@property (copy, nonatomic) NSDictionary *beaconMap;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo;
@property (copy, nonatomic) NSSet *multipartStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
