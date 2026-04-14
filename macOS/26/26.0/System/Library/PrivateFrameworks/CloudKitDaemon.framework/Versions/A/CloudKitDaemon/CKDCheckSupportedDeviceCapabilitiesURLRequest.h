@class NSArray, CKDeviceCapabilityCheckOptions, NSMutableDictionary;

@interface CKDCheckSupportedDeviceCapabilitiesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *continuations;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSArray *desiredCapabilitySets;
@property (retain, nonatomic) CKDeviceCapabilityCheckOptions *options;
@property (retain, nonatomic) NSMutableDictionary *zoneIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *capabililitySetsByRequestID;
@property (copy, nonatomic) id /* block */ supportedDeviceCapabilitiesCheckedForZoneBlock;
@property (copy, nonatomic) id /* block */ continuationResponseBlock;
@property (copy, nonatomic) id /* block */ errorFromServerBlock;
@property (copy, nonatomic) id /* block */ errorFromClientValidationBlock;

- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 continuations:(id)a1 zoneIDs:(id)a2 desiredCapabilitySets:(id)a3 options:(id)a4;
- (void)reportClientValidationError:(id)a0 forZoneID:(id)a1 capabilitySet:(id)a2 failureType:(id)a3;
- (void)reportContinuationToken:(id)a0 forZoneID:(id)a1 capabilitySet:(id)a2;

@end
