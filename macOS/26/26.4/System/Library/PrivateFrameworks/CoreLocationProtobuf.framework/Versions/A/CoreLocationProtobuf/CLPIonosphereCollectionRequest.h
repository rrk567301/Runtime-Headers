@class CLPMeta, NSMutableArray;

@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *ionoDatas;

+ (Class)ionoDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addIonoData:(id)a0;
- (void)clearIonoDatas;
- (id)ionoDataAtIndex:(unsigned long long)a0;
- (unsigned long long)ionoDatasCount;

@end
