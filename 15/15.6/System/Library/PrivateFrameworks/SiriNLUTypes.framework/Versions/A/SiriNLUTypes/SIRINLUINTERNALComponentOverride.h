@class NSString, NSData, NSMutableArray, SIRINLUINTERNALOverrideValue;

@interface SIRINLUINTERNALComponentOverride : PBCodable <NSCopying> {
    struct { unsigned char creationTimestampMsSinceUnixEpoch : 1; unsigned char overrideNamespace : 1; unsigned char enabled : 1; } _has;
}

@property (readonly, nonatomic) char hasIdA;
@property (retain, nonatomic) NSString *idA;
@property (nonatomic) char hasOverrideNamespace;
@property (nonatomic) int overrideNamespace;
@property (nonatomic) char hasEnabled;
@property (nonatomic) char enabled;
@property (nonatomic) char hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) SIRINLUINTERNALOverrideValue *value;
@property (retain, nonatomic) NSMutableArray *nluRequestRules;
@property (readonly, nonatomic) char hasSerializedValue;
@property (retain, nonatomic) NSData *serializedValue;

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
- (int)StringAsOverrideNamespace:(id)a0;
- (void)addNluRequestRules:(id)a0;
- (void)clearNluRequestRules;
- (id)nluRequestRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)nluRequestRulesCount;
- (id)overrideNamespaceAsString:(int)a0;

@end
