@class HAPMatterFirmwareUpdateStatus, NSNumber, HMMTRAccessoryServer;

@interface HMMTRFirmwareUpdateStatus : NSObject

@property (retain, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (retain, nonatomic) HAPMatterFirmwareUpdateStatus *localFirmwareUpdateStatus;
@property (retain, nonatomic) NSNumber *downloadedFirmwareVersionNumber;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)checkCurrentFirmwareVersionNumber:(id)a0;
- (id)initWithFirmwareUpdateStatus:(id)a0 accessoryServer:(id)a1;
- (id)readForHAPFirmwareUpdateReadinessCharacteristic:(id)a0;
- (id)readForHAPFirmwareUpdateStatusCharacteristic:(id)a0;
- (id)readForMatterFirmwareUpdateStatusCharacteristic:(id)a0;
- (void)updateDownloadedFirmwareVersionNumber:(id)a0;
- (void)updateFirmwareUpdateStatus:(long long)a0;

@end
