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

- (id)statusAsString:(int)a0;
- (void)clearChangedDeltas;
- (id)changedShareAtIndex:(unsigned long long)a0;
- (id)changedRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)changedRecordsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearChangedShares;
- (unsigned long long)syncObligationsCount;
- (void)copyTo:(id)a0;
- (void)addSyncObligations:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)changedSharesCount;
- (void)addChangedRecord:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addChangedDeltas:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addChangedShare:(id)a0;
- (void)clearChangedRecords;
- (int)StringAsStatus:(id)a0;
- (id)description;
- (unsigned long long)changedDeltasCount;
- (void)clearSyncObligations;
- (void)writeTo:(id)a0;
- (id)changedDeltasAtIndex:(unsigned long long)a0;
- (id)syncObligationsAtIndex:(unsigned long long)a0;

@end
