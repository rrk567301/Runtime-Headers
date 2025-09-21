@class NSString, SIRICOMMONInt32Value, SIRICOMMONStringValue, SIRICOMMONFloatValue;

@interface SIRINLUEXTERNALSpanProperty : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasValueString;
@property (retain, nonatomic) SIRICOMMONStringValue *valueString;
@property (readonly, nonatomic) char hasValueInt;
@property (retain, nonatomic) SIRICOMMONInt32Value *valueInt;
@property (readonly, nonatomic) char hasValueFloat;
@property (retain, nonatomic) SIRICOMMONFloatValue *valueFloat;

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
