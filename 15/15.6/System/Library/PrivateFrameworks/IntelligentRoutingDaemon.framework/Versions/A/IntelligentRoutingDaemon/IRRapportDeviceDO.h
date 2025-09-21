@class NSString;

@interface IRRapportDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *rapportEffectiveID;
@property (readonly, nonatomic) NSString *idsID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *mediaRemoteIdentifier;
@property (readonly, nonatomic) NSString *iCloudId;
@property (readonly, nonatomic) NSString *mediaRouteIdentifier;

+ (id)rapportDeviceDOWithRapportEffectiveID:(id)a0 idsID:(id)a1 name:(id)a2 deviceModel:(id)a3 mediaRemoteIdentifier:(id)a4 iCloudId:(id)a5 mediaRouteIdentifier:(id)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithReplacementDeviceModel:(id)a0;
- (id)copyWithReplacementICloudId:(id)a0;
- (id)copyWithReplacementIdsID:(id)a0;
- (id)copyWithReplacementMediaRemoteIdentifier:(id)a0;
- (id)copyWithReplacementMediaRouteIdentifier:(id)a0;
- (id)copyWithReplacementRapportEffectiveID:(id)a0;
- (id)exportAsDictionary;
- (id)initWithRapportEffectiveID:(id)a0 idsID:(id)a1 name:(id)a2 deviceModel:(id)a3 mediaRemoteIdentifier:(id)a4 iCloudId:(id)a5 mediaRouteIdentifier:(id)a6;
- (char)isEqualToRapportDeviceDO:(id)a0;

@end
