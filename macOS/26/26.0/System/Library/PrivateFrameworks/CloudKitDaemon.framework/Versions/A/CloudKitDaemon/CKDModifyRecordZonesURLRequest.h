@class NSArray, NSMutableDictionary, NSDate;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSArray *generatedRequestOperations;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate;
@property (copy, nonatomic) id /* block */ recordZoneModifiedBlock;

- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)zoneIDsToLock;
- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)initWithOperation:(id)a0 recordZonesToSave:(id)a1 recordZoneIDsToDelete:(id)a2;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)makeRequestOperations;
- (void).cxx_destruct;

@end
