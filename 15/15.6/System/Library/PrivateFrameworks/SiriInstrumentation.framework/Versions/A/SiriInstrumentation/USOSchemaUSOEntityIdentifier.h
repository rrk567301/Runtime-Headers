@class NSString, NSData;

@interface USOSchemaUSOEntityIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char nodeIndex : 1; unsigned char probability : 1; unsigned char sourceNluComponent : 1; unsigned char backingAppBundleType : 1; unsigned char groupIndex : 1; unsigned char interpretationGroup : 1; } _has;
}

@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) char hasNodeIndex;
@property (copy, nonatomic) NSString *identifierNamespace;
@property (nonatomic) char hasIdentifierNamespace;
@property (nonatomic) double probability;
@property (nonatomic) char hasProbability;
@property (nonatomic) int sourceNluComponent;
@property (nonatomic) char hasSourceNluComponent;
@property (nonatomic) int backingAppBundleType;
@property (nonatomic) char hasBackingAppBundleType;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic) char hasGroupIndex;
@property (nonatomic) unsigned int interpretationGroup;
@property (nonatomic) char hasInterpretationGroup;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNodeIndex;
- (void)deleteBackingAppBundleType;
- (void)deleteGroupIndex;
- (void)deleteIdentifierNamespace;
- (void)deleteInterpretationGroup;
- (void)deleteProbability;
- (void)deleteSourceNluComponent;
- (id)suppressMessageUnderConditions;

@end
