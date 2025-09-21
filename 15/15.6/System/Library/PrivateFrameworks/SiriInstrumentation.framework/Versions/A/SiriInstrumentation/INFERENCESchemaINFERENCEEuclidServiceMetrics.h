@class NSData;

@interface INFERENCESchemaINFERENCEEuclidServiceMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char isAsrE3Invoked : 1; unsigned char numEuclidCandidates : 1; } _has;
}

@property (nonatomic) char isAsrE3Invoked;
@property (nonatomic) char hasIsAsrE3Invoked;
@property (nonatomic) unsigned int numEuclidCandidates;
@property (nonatomic) char hasNumEuclidCandidates;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAsrE3Invoked;
- (void)deleteNumEuclidCandidates;
- (id)suppressMessageUnderConditions;

@end
