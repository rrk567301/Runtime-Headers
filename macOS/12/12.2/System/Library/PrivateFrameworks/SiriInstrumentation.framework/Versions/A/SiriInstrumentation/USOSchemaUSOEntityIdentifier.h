@class NSString, NSData;

@interface USOSchemaUSOEntityIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char nodeIndex : 1; unsigned char probability : 1; unsigned char sourceNluComponent : 1; unsigned char backingAppBundleType : 1; } _has;
}

@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) BOOL hasNodeIndex;
@property (copy, nonatomic) NSString *identifierNamespace;
@property (nonatomic) BOOL hasIdentifierNamespace;
@property (nonatomic) double probability;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) int sourceNluComponent;
@property (nonatomic) BOOL hasSourceNluComponent;
@property (nonatomic) int backingAppBundleType;
@property (nonatomic) BOOL hasBackingAppBundleType;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
