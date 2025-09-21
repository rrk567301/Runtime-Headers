@class NSMutableArray;

@interface HDCodableBloodPressureJournalState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bloodPressureJournals;

+ (Class)bloodPressureJournalType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addBloodPressureJournal:(id)a0;
- (id)bloodPressureJournalAtIndex:(unsigned long long)a0;
- (unsigned long long)bloodPressureJournalsCount;
- (void)clearBloodPressureJournals;

@end
