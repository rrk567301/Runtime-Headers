@class NSData, HDCodableWorkoutSessionConfiguration, HDCodableWorkoutSessionGlobalState;

@interface HDCodableWorkoutSessionSyncTransaction : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) HDCodableWorkoutSessionConfiguration *configuration;
@property (readonly, nonatomic) BOOL hasGlobalState;
@property (retain, nonatomic) HDCodableWorkoutSessionGlobalState *globalState;
@property (readonly, nonatomic) BOOL hasArbitraryData;
@property (retain, nonatomic) NSData *arbitraryData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
