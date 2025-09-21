@class RRSchemaProvisionalRRGroupIdentifier, NSString, USOSchemaUSOGraph, NSArray, NSData;

@interface RRSchemaProvisionalRRAnnotatedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char saliencyScore : 1; unsigned char saliencyComputedAtTimestampInSeconds : 1; unsigned char hasReference : 1; } _has;
}

@property (retain, nonatomic) USOSchemaUSOGraph *usoGraph;
@property (nonatomic) char hasUsoGraph;
@property (copy, nonatomic) NSString *swiftClassName;
@property (nonatomic) char hasSwiftClassName;
@property (retain, nonatomic) RRSchemaProvisionalRRGroupIdentifier *group;
@property (nonatomic) char hasGroup;
@property (copy, nonatomic) NSArray *annotations;
@property (nonatomic) float saliencyScore;
@property (nonatomic) char hasSaliencyScore;
@property (nonatomic) unsigned long long saliencyComputedAtTimestampInSeconds;
@property (nonatomic) char hasSaliencyComputedAtTimestampInSeconds;
@property (nonatomic) char hasReference;
@property (nonatomic) char hasHasReference;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAnnotations:(id)a0;
- (id)annotationsAtIndex:(unsigned long long)a0;
- (unsigned long long)annotationsCount;
- (void)clearAnnotations;

@end
