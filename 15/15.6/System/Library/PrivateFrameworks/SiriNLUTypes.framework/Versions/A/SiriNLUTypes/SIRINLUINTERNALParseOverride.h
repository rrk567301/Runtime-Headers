@class NSString, SIRINLUEXTERNALUserParse, NSData, NSMutableArray;

@interface SIRINLUINTERNALParseOverride : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; unsigned char parserIdentifier : 1; unsigned char enabled : 1; } _has;
}

@property (readonly, nonatomic) char hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (nonatomic) char hasEnabled;
@property (nonatomic) char enabled;
@property (nonatomic) char hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (nonatomic) char hasParserIdentifier;
@property (nonatomic) int parserIdentifier;
@property (readonly, nonatomic) char hasParse;
@property (retain, nonatomic) SIRINLUEXTERNALUserParse *parse;
@property (retain, nonatomic) NSMutableArray *nluRequestRules;
@property (readonly, nonatomic) char hasSerializedParse;
@property (retain, nonatomic) NSData *serializedParse;

+ (Class)nluRequestRulesType;

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
- (int)StringAsParserIdentifier:(id)a0;
- (void)addNluRequestRules:(id)a0;
- (void)clearNluRequestRules;
- (id)nluRequestRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)nluRequestRulesCount;
- (id)parserIdentifierAsString:(int)a0;

@end
