@class NSString, NSData;

@interface _MRRemoteArtworkProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasArtworkURLString;
@property (retain, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) char hasArtworkURLTemplateData;
@property (retain, nonatomic) NSData *artworkURLTemplateData;

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
