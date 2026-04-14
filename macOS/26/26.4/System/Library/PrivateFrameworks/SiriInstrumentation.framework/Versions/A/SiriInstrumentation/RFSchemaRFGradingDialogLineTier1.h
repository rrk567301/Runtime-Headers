@class NSString, NSData;

@interface RFSchemaRFGradingDialogLineTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isApprovedForGrading : 1; } _has;
}

@property (copy, nonatomic) NSString *dialogId;
@property (nonatomic) BOOL hasDialogId;
@property (nonatomic) BOOL isApprovedForGrading;
@property (nonatomic) BOOL hasIsApprovedForGrading;
@property (copy, nonatomic) NSString *spokenDialog;
@property (nonatomic) BOOL hasSpokenDialog;
@property (copy, nonatomic) NSString *displayedDialog;
@property (nonatomic) BOOL hasDisplayedDialog;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDialogId;
- (void)deleteDisplayedDialog;
- (void)deleteIsApprovedForGrading;
- (void)deleteSpokenDialog;

@end
