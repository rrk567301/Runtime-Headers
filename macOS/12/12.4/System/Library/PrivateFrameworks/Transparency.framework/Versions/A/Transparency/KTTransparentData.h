@class NSData, NSMutableArray, NSDate;

@interface KTTransparentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableArray *accounts;
@property (retain) NSData *uriVRFOutput;
@property (retain) NSData *inclusionProof;
@property (retain) NSDate *currentTreeEpochBeginDate;

- (id)copy;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)updateWithMutation:(id)a0 error:(id *)a1;
- (id)failedRecordsForSyncedLoggableDatas:(id)a0 accountKey:(id)a1 error:(id *)a2;
- (id)failedServerLoggableDatas:(id)a0 accountKey:(id)a1 requestTime:(double)a2 error:(id *)a3;
- (id)initWithUriVRFOutput:(id)a0 mapLeaf:(id)a1 pendingSMTs:(id)a2 error:(id *)a3;
- (id)earliestAddedDate:(id)a0;
- (BOOL)validateAndUpdateWithServerLoggableDatas:(id)a0 accountKey:(id)a1 requestTime:(double)a2 error:(id *)a3;
- (BOOL)validateOtherAccountKeyHashesInactiveForAccountKey:(id)a0 requestTime:(double)a1 error:(id *)a2;
- (BOOL)validateActiveClientDatasForAccountKey:(id)a0 error:(id *)a1;
- (BOOL)validateAndUpdateWithSyncedLoggableDatas:(id)a0 accountKey:(id)a1 error:(id *)a2;
- (BOOL)updateWithMapLeaf:(id)a0 error:(id *)a1;
- (BOOL)updateWithSMTs:(id)a0 error:(id *)a1;
- (id)accountForAccountKeyHash:(id)a0;
- (void)markAccountsWithMutationMs:(unsigned long long)a0;
- (void)addAccountsObject:(id)a0;
- (void)removeAccountsObject:(id)a0;
- (id)mutationsFromSMTs:(id)a0 error:(id *)a1;
- (id)sortMutationsByTimestamp:(id)a0;
- (id)accountForAccountKey:(id)a0;
- (id)filterLoggableDatas:(id)a0 deviceIdHash:(id)a1;
- (id)filterLoggableDatas:(id)a0 clientDataHash:(id)a1;
- (id)failureDetails:(id)a0 loggableData:(id)a1;
- (id)initWithUriVRFOutput:(id)a0;

@end
