@class NSData, NSString;

@interface VCPProtoMovieFaceprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) unsigned int faceID;
@property (retain, nonatomic) NSData *faceprintBlob;
@property (readonly, nonatomic) BOOL hasThumbnailID;
@property (retain, nonatomic) NSString *thumbnailID;

+ (id)resultFromLegacyDictionary:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)exportToLegacyDictionary;

@end
