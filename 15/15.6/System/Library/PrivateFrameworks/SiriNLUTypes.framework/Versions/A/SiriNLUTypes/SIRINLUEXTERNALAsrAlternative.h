@class NSString, SIRICOMMONFloatValue;

@interface SIRINLUEXTERNALAsrAlternative : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAlternative;
@property (retain, nonatomic) NSString *alternative;
@property (readonly, nonatomic) char hasProbability;
@property (retain, nonatomic) SIRICOMMONFloatValue *probability;

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
