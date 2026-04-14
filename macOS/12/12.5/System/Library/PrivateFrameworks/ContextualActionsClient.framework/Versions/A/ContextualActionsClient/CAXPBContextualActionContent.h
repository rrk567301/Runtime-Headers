@class NSString, NSData;

@interface CAXPBContextualActionContent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *contentType;
@property (readonly, nonatomic) BOOL hasContentMetadata;
@property (retain, nonatomic) NSData *contentMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
