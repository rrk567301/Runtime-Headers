@class NSMutableArray;

@interface VisionSignalGradingVisionGradeEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *visionGrades;
@property (retain, nonatomic) NSMutableArray *popularityEntries;

+ (Class)visionGradesType;
+ (Class)popularityEntriesType;

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
- (void)clearVisionGrades;
- (void)addVisionGrades:(id)a0;
- (unsigned long long)visionGradesCount;
- (id)visionGradesAtIndex:(unsigned long long)a0;
- (void)clearPopularityEntries;
- (void)addPopularityEntries:(id)a0;
- (unsigned long long)popularityEntriesCount;
- (id)popularityEntriesAtIndex:(unsigned long long)a0;

@end
