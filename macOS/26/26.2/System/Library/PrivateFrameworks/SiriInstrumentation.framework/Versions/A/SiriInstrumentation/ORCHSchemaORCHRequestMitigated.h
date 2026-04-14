@class NSData;

@interface ORCHSchemaORCHRequestMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char mitigationSource : 1; } _has;
}

@property (nonatomic) int mitigationSource;
@property (nonatomic) BOOL hasMitigationSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteMitigationSource;

@end
