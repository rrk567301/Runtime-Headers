@class NSMutableArray;

@interface HDCodableBloodPressureJournalState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bloodPressureJournals;

+ (Class)bloodPressureJournalType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addBloodPressureJournal:(id)a0;
- (id)bloodPressureJournalAtIndex:(unsigned long long)a0;
- (unsigned long long)bloodPressureJournalsCount;
- (void)clearBloodPressureJournals;

@end
