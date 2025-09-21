@class NSData, HDCodableWorkoutSessionConfiguration, HDCodableWorkoutSessionGlobalState;

@interface HDCodableWorkoutSessionSyncTransaction : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (readonly, nonatomic) char hasConfiguration;
@property (retain, nonatomic) HDCodableWorkoutSessionConfiguration *configuration;
@property (readonly, nonatomic) char hasGlobalState;
@property (retain, nonatomic) HDCodableWorkoutSessionGlobalState *globalState;
@property (readonly, nonatomic) char hasArbitraryData;
@property (retain, nonatomic) NSData *arbitraryData;

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

@end
