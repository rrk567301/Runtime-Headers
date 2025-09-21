@class NSDictionary;

@interface MAAutoAssetSetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char userInitiated;
@property (nonatomic) char lockInhibitsEmergencyRemoval;
@property (nonatomic) char supportingShortTermLocks;
@property (nonatomic) char allowCheckDownloadOnBattery;
@property (nonatomic) char allowCheckDownloadWhenBatteryLow;
@property (nonatomic) char allowCheckDownloadWhenCPUHigh;
@property (nonatomic) char allowCheckDownloadOverExpensive;
@property (nonatomic) char allowCheckDownloadOverCellular;
@property (nonatomic) char blockCheckDownload;
@property (nonatomic) char blockCheckDownloadWhenRecentUserActivity;
@property (nonatomic) char preferCheckDownloadOverWiFi;
@property (nonatomic) char restrictCheckDownloadToNetwork;
@property (retain, nonatomic) NSDictionary *additionalPolicyControl;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;

@end
