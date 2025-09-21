@class NSData;

@interface FLOWSchemaFLOWLocationAccessPermissionPromptFailed : SISchemaInstrumentationMessage {
    struct { unsigned char failureReason : 1; } _has;
}

@property (nonatomic) int failureReason;
@property (nonatomic) char hasFailureReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFailureReason;
- (id)suppressMessageUnderConditions;

@end
