@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALRRGroupIdentifier, SIRICOMMONStringValue, SIRICOMMONDoubleValue, NSMutableArray, SIRINLUEXTERNALRRMetadata;

@interface SIRINLUEXTERNALEntityCandidate : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEntity;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *entity;
@property (readonly, nonatomic) char hasScore;
@property (retain, nonatomic) SIRICOMMONDoubleValue *score;
@property (readonly, nonatomic) char hasEntityId;
@property (retain, nonatomic) SIRICOMMONStringValue *entityId;
@property (readonly, nonatomic) char hasAppBundleId;
@property (retain, nonatomic) SIRICOMMONStringValue *appBundleId;
@property (readonly, nonatomic) char hasGroupId;
@property (retain, nonatomic) SIRINLUEXTERNALRRGroupIdentifier *groupId;
@property (retain, nonatomic) NSMutableArray *annotations;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) SIRINLUEXTERNALRRMetadata *metadata;

+ (Class)annotationsType;

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
- (void)addAnnotations:(id)a0;
- (id)annotationsAtIndex:(unsigned long long)a0;
- (unsigned long long)annotationsCount;
- (void)clearAnnotations;

@end
