@class NSData, CKRecordZoneID, NSArray;

@interface CKDCheckSupportedDeviceCapabilitiesContinuationParams : NSObject

@property (retain, nonatomic) NSData *continuationToken;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSArray *capabilitySet;

- (void).cxx_destruct;
- (id)initWithContinuationToken:(id)a0 zoneID:(id)a1 capabilitySet:(id)a2;

@end
