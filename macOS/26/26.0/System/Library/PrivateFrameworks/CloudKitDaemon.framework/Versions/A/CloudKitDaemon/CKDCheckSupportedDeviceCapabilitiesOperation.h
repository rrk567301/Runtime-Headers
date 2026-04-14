@class NSArray, CKDeviceCapabilityCheckOptions, NSMutableArray;
@protocol CKCheckSupportedDeviceCapabilitiesOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDCheckSupportedDeviceCapabilitiesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSArray *desiredCapabilitySets;
@property (retain, nonatomic) CKDeviceCapabilityCheckOptions *options;
@property (retain, nonatomic) NSMutableArray *continuations;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) id<CKCheckSupportedDeviceCapabilitiesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ checkSupportedDeviceCapabilitiesProgressBlock;

+ (id)nameForState:(unsigned long long)a0;

- (id)activityCreate;
- (BOOL)makeStateTransition;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)relevantZoneIDs;
- (void).cxx_destruct;
- (void)_handleContinuation:(id)a0;
- (void)_handleError:(id)a0 forZoneID:(id)a1 capabilitySet:(id)a2;
- (void)_handleSupportedDeviceCapabilitiesCheckedForZoneID:(id)a0 capabilitySet:(id)a1 result:(id)a2 responseCode:(id)a3;
- (void)checkSupportedCapabilitiesWithServer;
- (void)fetchServerConfigIfNecessary;
- (void)invokeCompletionHandlers;
- (void)reportClientValidationError:(id)a0;
- (void)validateShareParticipants;
- (void)validateSigningIdentities;

@end
