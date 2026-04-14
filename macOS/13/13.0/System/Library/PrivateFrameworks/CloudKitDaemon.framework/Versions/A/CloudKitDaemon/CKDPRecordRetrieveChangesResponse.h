@class NSData, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; unsigned char pendingArchivedRecords : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *changedRecords;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *changedShares;
@property (nonatomic) BOOL hasPendingArchivedRecords;
@property (nonatomic) BOOL pendingArchivedRecords;
@property (retain, nonatomic) NSMutableArray *changedDeltas;
@property (retain, nonatomic) NSMutableArray *syncObligations;

+ (Class)changedRecordType;
+ (Class)changedShareType;
+ (Class)changedDeltasType;
+ (Class)syncObligationsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)clearChangedRecords;
- (void)addChangedRecord:(id)a0;
- (unsigned long long)changedRecordsCount;
- (id)changedRecordAtIndex:(unsigned long long)a0;
- (void)clearChangedShares;
- (void)addChangedShare:(id)a0;
- (unsigned long long)changedSharesCount;
- (id)changedShareAtIndex:(unsigned long long)a0;
- (void)clearChangedDeltas;
- (void)addChangedDeltas:(id)a0;
- (unsigned long long)changedDeltasCount;
- (id)changedDeltasAtIndex:(unsigned long long)a0;
- (void)clearSyncObligations;
- (void)addSyncObligations:(id)a0;
- (unsigned long long)syncObligationsCount;
- (id)syncObligationsAtIndex:(unsigned long long)a0;

@end
