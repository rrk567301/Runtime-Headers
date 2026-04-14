@class NSArray, NSDictionary, NSData, NSMutableDictionary;

@interface CKDModifyRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToSigningPCSIdentity;
@property (nonatomic) BOOL oplock;
@property (nonatomic) BOOL sendAllFields;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (retain, nonatomic) NSDictionary *requestedFieldsByRecordID;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) BOOL atomic;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;
@property (retain, nonatomic) NSArray *userPublicKeys;
@property (copy, nonatomic) id /* block */ recordPostedBlock;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (int)isolationLevel;
- (void)addSignatureForRequestOperation:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (BOOL)allowsAnonymousAccount;
- (id)zoneIDsToLock;
- (id)initWithOperation:(id)a0 recordsToSave:(id)a1 recordIDsToDelete:(id)a2 recordIDsToDeleteToSigningPCSIdentity:(id)a3 oplock:(BOOL)a4 sendAllFields:(BOOL)a5 clientChangeTokenData:(id)a6 requestedFieldsByRecordId:(id)a7;

@end
