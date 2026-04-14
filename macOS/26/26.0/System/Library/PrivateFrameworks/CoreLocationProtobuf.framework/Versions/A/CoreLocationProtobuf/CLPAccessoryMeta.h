@class NSString;

@interface CLPAccessoryMeta : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMake;
@property (retain, nonatomic) NSString *make;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
