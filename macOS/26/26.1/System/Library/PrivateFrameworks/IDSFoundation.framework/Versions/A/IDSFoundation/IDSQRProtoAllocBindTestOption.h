@class NSMutableArray;

@interface IDSQRProtoAllocBindTestOption : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *experimentOverrides;

+ (Class)experimentOverridesType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addExperimentOverrides:(id)a0;
- (void)clearExperimentOverrides;
- (id)experimentOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)experimentOverridesCount;

@end
