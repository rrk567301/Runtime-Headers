@class NSData;

@interface SISchemaServerGeneratedDismissal : SISchemaInstrumentationMessage {
    struct { unsigned char serverGeneratedDismissalReason : 1; } _has;
}

@property (nonatomic) int serverGeneratedDismissalReason;
@property (nonatomic) char hasServerGeneratedDismissalReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteServerGeneratedDismissalReason;
- (id)suppressMessageUnderConditions;

@end
