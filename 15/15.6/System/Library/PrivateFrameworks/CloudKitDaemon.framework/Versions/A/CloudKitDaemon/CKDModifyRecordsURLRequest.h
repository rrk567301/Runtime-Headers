@class NSArray, NSDictionary, NSData, NSMutableDictionary, NSMutableArray;

@interface CKDModifyRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToSigningPCSIdentity;
@property (nonatomic) char oplock;
@property (nonatomic) char sendAllFields;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (retain, nonatomic) NSDictionary *requestedFieldsByRecordID;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (retain, nonatomic) NSMutableDictionary *mergeableFieldKeyByRequestID;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic) char containsMergeableValues;
@property (retain, nonatomic) NSMutableArray *skippedRecordsWithPurelyMergeableChanges;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) char atomic;
@property (nonatomic) char sendMergeableDeltas;
@property (nonatomic) char markAsParticipantNeedsNewInvitationToken;
@property (retain, nonatomic) NSArray *userPublicKeys;
@property (copy, nonatomic) id /* block */ recordPostedBlock;
@property (copy, nonatomic) id /* block */ mergeableDeltaSavedBlock;
@property (copy, nonatomic) id /* block */ replacedDeltasBlock;

- (void).cxx_destruct;
- (char)allowsAnonymousAccount;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateMergeableDeltaSaveOperationsForRecord:(id)a0 error:(id *)a1;
- (id)generateRequestOperations;
- (char)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 recordsToSave:(id)a1 recordIDsToDelete:(id)a2 recordIDsToDeleteToSigningPCSIdentity:(id)a3 oplock:(char)a4 sendAllFields:(char)a5 clientChangeTokenData:(id)a6 requestedFieldsByRecordId:(id)a7;
- (int)isolationLevel;
- (id)recordIDsUsedInZones:(id)a0;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (char)requiresCKAnonymousSignature;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)a0 dataToBeSigned:(id)a1 error:(id *)a2;
- (id)zoneIDsToLock;

@end
