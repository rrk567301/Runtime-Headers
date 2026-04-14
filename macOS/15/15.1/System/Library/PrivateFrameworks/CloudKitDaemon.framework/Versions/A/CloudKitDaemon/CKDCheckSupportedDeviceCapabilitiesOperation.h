@class NSArray, CKDeviceCapabilityCheckOptions;
@protocol CKCheckSupportedDeviceCapabilitiesOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDCheckSupportedDeviceCapabilitiesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSArray *desiredCapabilitySets;
@property (retain, nonatomic) CKDeviceCapabilityCheckOptions *options;
@property (retain, nonatomic) id<CKCheckSupportedDeviceCapabilitiesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ checkSupportedDeviceCapabilitiesProgressBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (void)_handleSupportedDeviceCapabilitiesCheckedForZoneID:(id)a0 capabilitySet:(id)a1 result:(id)a2 responseCode:(id)a3;
- (void)checkSupportedCapabilitiesWithServer;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;

@end
