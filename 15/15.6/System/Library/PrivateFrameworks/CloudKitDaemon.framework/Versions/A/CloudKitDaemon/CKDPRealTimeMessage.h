@class NSMutableArray;

@interface CKDPRealTimeMessage : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *saveRecords;
@property (retain, nonatomic) NSMutableArray *deleteRecordids;
@property (retain, nonatomic) NSMutableArray *associatedMergeableDeltas;

+ (Class)saveRecordsType;
+ (Class)associatedMergeableDeltasType;
+ (Class)deleteRecordidsType;

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
- (void)addSaveRecords:(id)a0;
- (void)addAssociatedMergeableDeltas:(id)a0;
- (void)addDeleteRecordids:(id)a0;
- (id)associatedMergeableDeltasAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedMergeableDeltasCount;
- (void)clearAssociatedMergeableDeltas;
- (void)clearDeleteRecordids;
- (void)clearSaveRecords;
- (id)deleteRecordidsAtIndex:(unsigned long long)a0;
- (unsigned long long)deleteRecordidsCount;
- (id)saveRecordsAtIndex:(unsigned long long)a0;
- (unsigned long long)saveRecordsCount;

@end
