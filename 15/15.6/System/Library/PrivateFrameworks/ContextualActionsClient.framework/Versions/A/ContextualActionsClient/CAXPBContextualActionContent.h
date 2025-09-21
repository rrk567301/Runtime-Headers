@class NSString, NSData;

@interface CAXPBContextualActionContent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *contentType;
@property (readonly, nonatomic) char hasContentMetadata;
@property (retain, nonatomic) NSData *contentMetadata;

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
