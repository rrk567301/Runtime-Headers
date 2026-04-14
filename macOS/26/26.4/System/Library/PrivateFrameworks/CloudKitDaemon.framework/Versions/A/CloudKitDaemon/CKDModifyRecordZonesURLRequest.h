@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSDate;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSDictionary *saveAncestryByZoneID;
@property (retain, nonatomic) NSDictionary *deleteAncestryByZoneID;
@property (retain, nonatomic) NSArray *generatedRequestOperations;
@property (nonatomic) BOOL oplock;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (retain, nonatomic) NSMutableSet *shareRequestIDs;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate;
@property (copy, nonatomic) id /* block */ recordZoneModifiedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)zoneIDsToLock;
- (id)zoneIDsUsed;
- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)makeRequestOperations;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordZonesToSave:(id)a1 recordZoneIDsToDelete:(id)a2 recordsToSave:(id)a3 saveAncestryByZoneID:(id)a4 deleteAncestryByZoneID:(id)a5 savePolicy:(unsigned long long)a6;

@end
