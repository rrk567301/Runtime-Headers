@class NSString;

@interface BMPBContentAttachment : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasFilename;
@property (retain, nonatomic) NSString *filename;
@property (readonly, nonatomic) char hasPath;
@property (retain, nonatomic) NSString *path;

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
