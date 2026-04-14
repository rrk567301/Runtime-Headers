@class NSString;

@interface CLPAccessoryMeta : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMake;
@property (retain, nonatomic) NSString *make;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;

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
