@class NSString, NSData;

@interface SISchemaSiriResponseContext : SISchemaInstrumentationMessage {
    struct { unsigned char presentationType : 1; unsigned char siriResponseMode : 1; } _has;
}

@property (copy, nonatomic) NSString *dialogPhase;
@property (nonatomic) char hasDialogPhase;
@property (nonatomic) int presentationType;
@property (nonatomic) char hasPresentationType;
@property (nonatomic) int siriResponseMode;
@property (nonatomic) char hasSiriResponseMode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDialogPhase;
- (void)deletePresentationType;
- (void)deleteSiriResponseMode;
- (id)suppressMessageUnderConditions;

@end
