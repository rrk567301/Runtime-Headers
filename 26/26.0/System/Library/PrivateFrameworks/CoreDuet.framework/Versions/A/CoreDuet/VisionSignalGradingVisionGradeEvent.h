@class NSMutableArray;

@interface VisionSignalGradingVisionGradeEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *visionGrades;
@property (retain, nonatomic) NSMutableArray *popularityEntries;

+ (Class)popularityEntriesType;
+ (Class)visionGradesType;

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
- (void)addPopularityEntries:(id)a0;
- (void)addVisionGrades:(id)a0;
- (void)clearPopularityEntries;
- (void)clearVisionGrades;
- (id)popularityEntriesAtIndex:(unsigned long long)a0;
- (unsigned long long)popularityEntriesCount;
- (id)visionGradesAtIndex:(unsigned long long)a0;
- (unsigned long long)visionGradesCount;

@end
