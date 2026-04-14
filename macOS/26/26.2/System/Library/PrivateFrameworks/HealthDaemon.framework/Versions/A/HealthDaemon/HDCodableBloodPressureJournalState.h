@class NSMutableArray;

@interface HDCodableBloodPressureJournalState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bloodPressureJournals;

+ (Class)bloodPressureJournalType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBloodPressureJournal:(id)a0;
- (id)bloodPressureJournalAtIndex:(unsigned long long)a0;
- (unsigned long long)bloodPressureJournalsCount;
- (void)clearBloodPressureJournals;

@end
