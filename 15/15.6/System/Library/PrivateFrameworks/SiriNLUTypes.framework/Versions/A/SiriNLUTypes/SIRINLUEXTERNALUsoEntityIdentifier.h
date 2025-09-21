@class NSString, SIRICOMMONDoubleValue, SIRICOMMONStringValue;

@interface SIRINLUEXTERNALUsoEntityIdentifier : PBCodable <NSCopying> {
    struct { unsigned char groupIndex : 1; unsigned char interpretationGroup : 1; unsigned char nodeIndex : 1; unsigned char sourceComponent : 1; } _has;
}

@property (nonatomic) char hasNodeIndex;
@property (nonatomic) unsigned int nodeIndex;
@property (readonly, nonatomic) char hasBackingAppBundleId;
@property (retain, nonatomic) NSString *backingAppBundleId;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) char hasNamespaceA;
@property (retain, nonatomic) SIRICOMMONStringValue *namespaceA;
@property (readonly, nonatomic) char hasProbability;
@property (retain, nonatomic) SIRICOMMONDoubleValue *probability;
@property (nonatomic) char hasSourceComponent;
@property (nonatomic) int sourceComponent;
@property (nonatomic) char hasGroupIndex;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic) char hasInterpretationGroup;
@property (nonatomic) unsigned int interpretationGroup;

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
- (int)StringAsSourceComponent:(id)a0;
- (id)sourceComponentAsString:(int)a0;

@end
