@class NSArray, CKDeviceCapabilityCheckOptions;

@interface CKCheckSupportedDeviceCapabilitiesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSArray *desiredCapabilitySets;
@property (retain, nonatomic) CKDeviceCapabilityCheckOptions *options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
