@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (nonatomic) char atomic;
@property (nonatomic) long long savePolicy;
@property (nonatomic) char shouldOnlySaveAssetContent;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) char shouldReportRecordsInFlight;
@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) char originatingFromDaemon;
@property (nonatomic) char markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) char shouldSkipPCSRetryBehavior;
@property (nonatomic) char shouldModifyRecordsInDatabase;
@property (nonatomic) char alwaysFetchPCSFromServer;
@property (nonatomic) char shouldCloneFileInAssetCache;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;

@end
