@class NSString, NSData;

@interface _MRRemoteArtworkProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasArtworkURLString;
@property (retain, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) BOOL hasArtworkURLTemplateData;
@property (retain, nonatomic) NSData *artworkURLTemplateData;

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

@end
