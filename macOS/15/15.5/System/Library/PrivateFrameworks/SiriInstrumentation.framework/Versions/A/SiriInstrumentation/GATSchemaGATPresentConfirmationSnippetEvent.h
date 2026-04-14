@class NSData;

@interface GATSchemaGATPresentConfirmationSnippetEvent : SISchemaInstrumentationMessage {
    struct { unsigned char confirmationDialogName : 1; unsigned char requestedAgent : 1; } _has;
}

@property (nonatomic) int confirmationDialogName;
@property (nonatomic) BOOL hasConfirmationDialogName;
@property (nonatomic) int requestedAgent;
@property (nonatomic) BOOL hasRequestedAgent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmationDialogName;
- (void)deleteRequestedAgent;
- (id)suppressMessageUnderConditions;

@end
