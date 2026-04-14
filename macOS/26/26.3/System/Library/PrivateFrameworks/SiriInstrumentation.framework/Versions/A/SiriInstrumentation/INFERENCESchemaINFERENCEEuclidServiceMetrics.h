@class NSData;

@interface INFERENCESchemaINFERENCEEuclidServiceMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char isAsrE3Invoked : 1; unsigned char numEuclidCandidates : 1; } _has;
}

@property (nonatomic) BOOL isAsrE3Invoked;
@property (nonatomic) BOOL hasIsAsrE3Invoked;
@property (nonatomic) unsigned int numEuclidCandidates;
@property (nonatomic) BOOL hasNumEuclidCandidates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsAsrE3Invoked;
- (void)deleteNumEuclidCandidates;

@end
