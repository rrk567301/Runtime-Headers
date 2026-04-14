@class NSData;

@interface GATSchemaGATPresentConfirmationSnippetEvent : SISchemaInstrumentationMessage {
    struct { unsigned char confirmationDialogName : 1; unsigned char requestedAgent : 1; } _has;
}

@property (nonatomic) int confirmationDialogName;
@property (nonatomic) BOOL hasConfirmationDialogName;
@property (nonatomic) int requestedAgent;
@property (nonatomic) BOOL hasRequestedAgent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteConfirmationDialogName;
- (void)deleteRequestedAgent;

@end
