@class NSString, NSData;

@interface CAXPBContextualActionParameter : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *parameterType;
@property (readonly, nonatomic) BOOL hasParameterMetadata;
@property (retain, nonatomic) NSData *parameterMetadata;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
