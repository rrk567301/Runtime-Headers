@class NIDiscoveryToken, NSUUID, NSDictionary, NSData;

@interface NINearbyAccessoryConfiguration : NIConfiguration {
    NSData *_rawData;
}

@property (readonly, copy) NSData *accessoryConfigData;
@property (copy) NSUUID *bluetoothDeviceIdentifier;
@property (copy) NSDictionary *debugParameters;
@property (readonly) BOOL dataExchangeDisabledAndUsingParameterOverrides;
@property (nonatomic) long long backgroundMode;
@property (readonly, copy, nonatomic) NIDiscoveryToken *accessoryDiscoveryToken;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithDataExchangeDisabledAndUsingParameterOverrides:(id)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)description;
- (BOOL)_internalIsPowerAssertionRequired;
- (void).cxx_destruct;
- (id)initWithAccessoryData:(id)a0 bluetoothPeerIdentifier:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;

@end
