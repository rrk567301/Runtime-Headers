@class CLPMeta, NSMutableArray;

@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *ionoDatas;

+ (Class)ionoDataType;

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
- (void)addIonoData:(id)a0;
- (void)clearIonoDatas;
- (id)ionoDataAtIndex:(unsigned long long)a0;
- (unsigned long long)ionoDatasCount;

@end
