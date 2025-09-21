@class NSString;

@interface CLPAccessoryMeta : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasMake;
@property (retain, nonatomic) NSString *make;
@property (readonly, nonatomic) char hasModel;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;

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
