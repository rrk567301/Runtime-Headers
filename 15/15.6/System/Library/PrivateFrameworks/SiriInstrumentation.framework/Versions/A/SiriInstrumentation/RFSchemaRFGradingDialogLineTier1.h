@class NSString, NSData;

@interface RFSchemaRFGradingDialogLineTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isApprovedForGrading : 1; } _has;
}

@property (copy, nonatomic) NSString *dialogId;
@property (nonatomic) char hasDialogId;
@property (nonatomic) char isApprovedForGrading;
@property (nonatomic) char hasIsApprovedForGrading;
@property (copy, nonatomic) NSString *spokenDialog;
@property (nonatomic) char hasSpokenDialog;
@property (copy, nonatomic) NSString *displayedDialog;
@property (nonatomic) char hasDisplayedDialog;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDialogId;
- (void)deleteDisplayedDialog;
- (void)deleteIsApprovedForGrading;
- (void)deleteSpokenDialog;
- (id)suppressMessageUnderConditions;

@end
