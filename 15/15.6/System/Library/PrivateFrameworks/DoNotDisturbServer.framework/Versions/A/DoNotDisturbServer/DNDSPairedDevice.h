@class NSUUID, NSString;

@interface DNDSPairedDevice : NSObject <NSCopying>

@property (readonly) char supportsKettle;
@property (readonly, copy, nonatomic) NSUUID *pairingIdentifier;
@property (readonly, copy, nonatomic) NSString *pairingDataStore;
@property (readonly, nonatomic, getter=isIOS14EraOS) char iOS14EraOS;
@property (readonly, nonatomic) char supportsSilenceLists;
@property (nonatomic, getter=isICloudEnabled) char iCloudEnabled;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *osBuild;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned long long deviceClass;
@property (readonly, nonatomic) unsigned long long assertionSyncProtocolVersion;
@property (readonly, nonatomic) unsigned long long configurationSyncProtocolVersion;
@property (readonly, nonatomic) unsigned long long syncServiceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCloudDeviceIdentifier:(id)a0 deviceClass:(unsigned long long)a1 assertionSyncProtocolVersion:(unsigned long long)a2 configurationSyncProtocolVersion:(unsigned long long)a3 supportsSilenceLists:(char)a4;
- (id)initWithLocalDeviceIdentifier:(id)a0 deviceClass:(unsigned long long)a1 assertionSyncProtocolVersion:(unsigned long long)a2 configurationSyncProtocolVersion:(unsigned long long)a3 iOS14EraOS:(char)a4 supportsSilenceLists:(char)a5 pairingIdentifier:(id)a6 pairingDataStore:(id)a7;

@end
