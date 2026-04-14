@class NSMutableArray;

@interface CKDPRealTimeMessage : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *saveRecords;
@property (retain, nonatomic) NSMutableArray *deleteRecordids;
@property (retain, nonatomic) NSMutableArray *associatedMergeableDeltas;

+ (Class)saveRecordsType;
+ (Class)deleteRecordidsType;
+ (Class)associatedMergeableDeltasType;

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
- (void)clearSaveRecords;
- (void)addSaveRecords:(id)a0;
- (unsigned long long)saveRecordsCount;
- (id)saveRecordsAtIndex:(unsigned long long)a0;
- (void)clearDeleteRecordids;
- (void)addDeleteRecordids:(id)a0;
- (unsigned long long)deleteRecordidsCount;
- (id)deleteRecordidsAtIndex:(unsigned long long)a0;
- (void)clearAssociatedMergeableDeltas;
- (void)addAssociatedMergeableDeltas:(id)a0;
- (unsigned long long)associatedMergeableDeltasCount;
- (id)associatedMergeableDeltasAtIndex:(unsigned long long)a0;

@end
