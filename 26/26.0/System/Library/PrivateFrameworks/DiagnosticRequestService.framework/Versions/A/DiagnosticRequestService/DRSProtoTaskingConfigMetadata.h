@class NSString, DRSProtoTaskingDeviceMetadata;

@interface DRSProtoTaskingConfigMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTaskingDeviceMetadata;
@property (retain, nonatomic) DRSProtoTaskingDeviceMetadata *taskingDeviceMetadata;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *teamId;

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

@end
