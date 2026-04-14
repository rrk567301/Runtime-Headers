@class NSMutableArray;

@interface IDSQRProtoAllocBindTestOption : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *experimentOverrides;

+ (Class)experimentOverridesType;

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
- (void)addExperimentOverrides:(id)a0;
- (void)clearExperimentOverrides;
- (id)experimentOverridesAtIndex:(unsigned long long)a0;
- (unsigned long long)experimentOverridesCount;

@end
