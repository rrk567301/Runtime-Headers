@class NSString, NSData;

@interface ATXPBUserNotificationModelScore : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char modelVersion : 1; unsigned char score : 1; unsigned char scoreTimestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasModelId;
@property (retain, nonatomic) NSString *modelId;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) unsigned long long modelVersion;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasScoreTimestamp;
@property (nonatomic) double scoreTimestamp;
@property (readonly, nonatomic) char hasScoreUUID;
@property (retain, nonatomic) NSString *scoreUUID;
@property (readonly, nonatomic) char hasScoreInfo;
@property (retain, nonatomic) NSData *scoreInfo;

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
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
