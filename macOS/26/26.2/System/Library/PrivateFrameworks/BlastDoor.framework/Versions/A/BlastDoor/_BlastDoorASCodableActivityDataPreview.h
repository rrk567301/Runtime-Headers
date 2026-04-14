@class NSMutableArray, _BlastDoorASCodableActivitySnapshot;

@interface _BlastDoorASCodableActivityDataPreview : PBCodable <NSCopying> {
    struct { unsigned char date : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActivitySnapshot;
@property (retain, nonatomic) _BlastDoorASCodableActivitySnapshot *activitySnapshot;
@property (retain, nonatomic) NSMutableArray *workouts;
@property (retain, nonatomic) NSMutableArray *achievements;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

+ (Class)achievementsType;
+ (Class)workoutsType;

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
- (id)achievementsAtIndex:(unsigned long long)a0;
- (unsigned long long)achievementsCount;
- (void)addAchievements:(id)a0;
- (void)addWorkouts:(id)a0;
- (void)clearAchievements;
- (void)clearWorkouts;
- (id)workoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)workoutsCount;

@end
