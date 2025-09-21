@class NSMutableArray, _BlastDoorASCodableActivitySnapshot;

@interface _BlastDoorASCodableActivityDataPreview : PBCodable <NSCopying> {
    struct { unsigned char date : 1; } _has;
}

@property (readonly, nonatomic) char hasActivitySnapshot;
@property (retain, nonatomic) _BlastDoorASCodableActivitySnapshot *activitySnapshot;
@property (retain, nonatomic) NSMutableArray *workouts;
@property (retain, nonatomic) NSMutableArray *achievements;
@property (nonatomic) char hasDate;
@property (nonatomic) double date;

+ (Class)achievementsType;
+ (Class)workoutsType;

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
- (id)achievementsAtIndex:(unsigned long long)a0;
- (unsigned long long)achievementsCount;
- (void)addAchievements:(id)a0;
- (void)addWorkouts:(id)a0;
- (void)clearAchievements;
- (void)clearWorkouts;
- (id)workoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)workoutsCount;

@end
