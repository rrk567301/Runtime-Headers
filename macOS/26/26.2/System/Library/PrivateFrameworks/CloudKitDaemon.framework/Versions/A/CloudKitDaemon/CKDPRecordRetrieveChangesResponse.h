@class NSData, NSMutableArray, CKDPRecordRetrieveChangesResponseZoneAttributesChange;

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
@property (readonly, nonatomic) BOOL hasZoneAttributesChange;
@property (retain, nonatomic) CKDPRecordRetrieveChangesResponseZoneAttributesChange *zoneAttributesChange;

+ (Class)changedDeltasType;
+ (Class)changedRecordType;
+ (Class)changedShareType;
+ (Class)syncObligationsType;

- (void)clearSyncObligations;
- (int)StringAsStatus:(id)a0;
- (id)statusAsString:(int)a0;
- (void)addChangedDeltas:(id)a0;
- (unsigned long long)syncObligationsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addChangedRecord:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changedShareAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)changedRecordAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)clearChangedShares;
- (void)addSyncObligations:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)changedRecordsCount;
- (id)description;
- (id)syncObligationsAtIndex:(unsigned long long)a0;
- (void)clearChangedDeltas;
- (id)changedDeltasAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)changedSharesCount;
- (void)clearChangedRecords;
- (void)addChangedShare:(id)a0;
- (unsigned long long)changedDeltasCount;

@end
