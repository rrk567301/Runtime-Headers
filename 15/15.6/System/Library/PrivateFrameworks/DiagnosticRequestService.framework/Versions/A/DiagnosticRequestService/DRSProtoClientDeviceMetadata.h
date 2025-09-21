@class NSString;

@interface DRSProtoClientDeviceMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) char hasDeviceCategory;
@property (retain, nonatomic) NSString *deviceCategory;
@property (readonly, nonatomic) char hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) char hasPlatform;
@property (retain, nonatomic) NSString *platform;

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
