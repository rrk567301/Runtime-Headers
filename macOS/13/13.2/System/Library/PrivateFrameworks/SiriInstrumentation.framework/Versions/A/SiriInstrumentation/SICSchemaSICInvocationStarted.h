@class NSData;

@interface SICSchemaSICInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isMuted : 1; } _has;
}

@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL hasIsMuted;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteIsMuted;

@end
