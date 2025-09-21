@class SIRINLUEXTERNALMatchInfo, SIRICOMMONStringValue, SIRINLUEXTERNALPayloadAttachmentInfo, NSMutableArray, SIRICOMMONUInt32Value;

@interface SIRINLUEXTERNALUsoEntitySpan : PBCodable <NSCopying> {
    struct { unsigned char nodeIndex : 1; unsigned char sourceComponent : 1; } _has;
}

@property (nonatomic) char hasNodeIndex;
@property (nonatomic) unsigned int nodeIndex;
@property (readonly, nonatomic) char hasOriginAppId;
@property (retain, nonatomic) SIRICOMMONStringValue *originAppId;
@property (nonatomic) char hasSourceComponent;
@property (nonatomic) int sourceComponent;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) SIRICOMMONStringValue *label;
@property (readonly, nonatomic) char hasMatchInfo;
@property (retain, nonatomic) SIRINLUEXTERNALMatchInfo *matchInfo;
@property (retain, nonatomic) NSMutableArray *properties;
@property (readonly, nonatomic) char hasStartIndex;
@property (retain, nonatomic) SIRICOMMONUInt32Value *startIndex;
@property (readonly, nonatomic) char hasEndIndex;
@property (retain, nonatomic) SIRICOMMONUInt32Value *endIndex;
@property (retain, nonatomic) NSMutableArray *alternatives;
@property (readonly, nonatomic) char hasOriginEntityId;
@property (retain, nonatomic) SIRICOMMONStringValue *originEntityId;
@property (readonly, nonatomic) char hasPayloadAttachmentInfo;
@property (retain, nonatomic) SIRINLUEXTERNALPayloadAttachmentInfo *payloadAttachmentInfo;

+ (Class)propertiesType;
+ (Class)alternativesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (void)addAlternatives:(id)a0;
- (id)alternativesAtIndex:(unsigned long long)a0;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (int)StringAsSourceComponent:(id)a0;
- (id)sourceComponentAsString:(int)a0;

@end
