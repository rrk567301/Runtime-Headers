@class NSData, NSMutableArray, CKDPRecordRetrieveChangesResponseZoneAttributesChange;

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; unsigned char pendingArchivedRecords : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *changedRecords;
@property (readonly, nonatomic) char hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (readonly, nonatomic) char hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *changedShares;
@property (nonatomic) char hasPendingArchivedRecords;
@property (nonatomic) char pendingArchivedRecords;
@property (retain, nonatomic) NSMutableArray *changedDeltas;
@property (retain, nonatomic) NSMutableArray *syncObligations;
@property (readonly, nonatomic) char hasZoneAttributesChange;
@property (retain, nonatomic) CKDPRecordRetrieveChangesResponseZoneAttributesChange *zoneAttributesChange;

+ (Class)changedDeltasType;
+ (Class)changedRecordType;
+ (Class)changedShareType;
+ (Class)syncObligationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)addChangedDeltas:(id)a0;
- (void)addChangedRecord:(id)a0;
- (void)addChangedShare:(id)a0;
- (void)addSyncObligations:(id)a0;
- (id)changedDeltasAtIndex:(unsigned long long)a0;
- (unsigned long long)changedDeltasCount;
- (id)changedRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)changedRecordsCount;
- (id)changedShareAtIndex:(unsigned long long)a0;
- (unsigned long long)changedSharesCount;
- (void)clearChangedDeltas;
- (void)clearChangedRecords;
- (void)clearChangedShares;
- (void)clearSyncObligations;
- (id)syncObligationsAtIndex:(unsigned long long)a0;
- (unsigned long long)syncObligationsCount;

@end
