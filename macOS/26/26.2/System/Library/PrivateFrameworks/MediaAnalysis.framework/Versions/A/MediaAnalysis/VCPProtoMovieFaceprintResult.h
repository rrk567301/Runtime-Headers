@class NSData, NSString;

@interface VCPProtoMovieFaceprintResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) unsigned int faceID;
@property (retain, nonatomic) NSData *faceprintBlob;
@property (readonly, nonatomic) BOOL hasThumbnailID;
@property (retain, nonatomic) NSString *thumbnailID;

+ (id)resultFromLegacyDictionary:(id)a0;

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
- (id)exportToLegacyDictionary;

@end
