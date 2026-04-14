@class NSMutableArray;

@interface AWDCoreRoutineFMCDailyAssessments : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *assessments;

+ (Class)assessmentType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)assessmentAtIndex:(unsigned long long)a0;
- (unsigned long long)assessmentsCount;
- (void)addAssessment:(id)a0;
- (void)clearAssessments;

@end
