@class NSArray, NSMutableDictionary, NSDate;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSArray *generatedRequestOperations;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate;
@property (copy, nonatomic) id /* block */ recordZoneModifiedBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutRequestProperties:(id)a0;
- (id)zoneIDsToLock;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)makeRequestOperations;
- (id)initWithOperation:(id)a0 recordZonesToSave:(id)a1 recordZoneIDsToDelete:(id)a2;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;

@end
