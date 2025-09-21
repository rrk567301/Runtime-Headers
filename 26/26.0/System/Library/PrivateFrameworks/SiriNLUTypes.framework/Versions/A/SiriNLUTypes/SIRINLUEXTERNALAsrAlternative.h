@class NSString, SIRICOMMONFloatValue;

@interface SIRINLUEXTERNALAsrAlternative : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAlternative;
@property (retain, nonatomic) NSString *alternative;
@property (readonly, nonatomic) BOOL hasProbability;
@property (retain, nonatomic) SIRICOMMONFloatValue *probability;

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
