@class NSString, HDCodableWorkoutConfiguration, HDCodableMetadataDictionary, NSMutableArray;

@interface HDCodableWorkoutActivity : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char endDate : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasConfiguration;
@property (retain, nonatomic) HDCodableWorkoutConfiguration *configuration;
@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadata;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSMutableArray *statistics;

+ (id)codableForWorkoutActivity:(id)a0;
+ (id)codableStatisticsForActivity:(id)a0;
+ (id)codablesForWorkoutActivities:(id)a0;
+ (Class)statisticsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addStatistics:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)statisticsCount;
- (void)clearStatistics;
- (id)statisticsAtIndex:(unsigned long long)a0;

@end
