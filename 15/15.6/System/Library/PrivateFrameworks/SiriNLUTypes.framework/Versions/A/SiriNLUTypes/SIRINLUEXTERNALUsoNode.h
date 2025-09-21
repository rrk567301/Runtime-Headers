@class NSMutableArray, NSString, SIRICOMMONStringValue, SIRICOMMONUInt32Value, SIRICOMMONInt64Value;

@interface SIRINLUEXTERNALUsoNode : PBCodable <NSCopying> {
    struct { unsigned char usoElementId : 1; } _has;
}

@property (nonatomic) char hasUsoElementId;
@property (nonatomic) unsigned int usoElementId;
@property (readonly, nonatomic) char hasStringPayload;
@property (retain, nonatomic) SIRICOMMONStringValue *stringPayload;
@property (readonly, nonatomic) char hasIntegerPayload;
@property (retain, nonatomic) SIRICOMMONInt64Value *integerPayload;
@property (readonly, nonatomic) char hasUsoVerbElementId;
@property (retain, nonatomic) SIRICOMMONUInt32Value *usoVerbElementId;
@property (readonly, nonatomic) char hasEntityLabel;
@property (retain, nonatomic) NSString *entityLabel;
@property (readonly, nonatomic) char hasVerbLabel;
@property (retain, nonatomic) NSString *verbLabel;
@property (retain, nonatomic) NSMutableArray *normalizedStringPayloads;

+ (Class)normalizedStringPayloadsType;

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
- (void)addNormalizedStringPayloads:(id)a0;
- (void)clearNormalizedStringPayloads;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)normalizedStringPayloadsCount;

@end
