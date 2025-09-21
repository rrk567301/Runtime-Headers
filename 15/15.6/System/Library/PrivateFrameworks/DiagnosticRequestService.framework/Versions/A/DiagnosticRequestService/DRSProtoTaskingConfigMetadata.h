@class NSString, DRSProtoTaskingDeviceMetadata;

@interface DRSProtoTaskingConfigMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTaskingDeviceMetadata;
@property (retain, nonatomic) DRSProtoTaskingDeviceMetadata *taskingDeviceMetadata;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasTeamId;
@property (retain, nonatomic) NSString *teamId;

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
