@class NSString, NSData;

@interface SISchemaSiriResponseContext : SISchemaInstrumentationMessage {
    struct { unsigned char presentationType : 1; unsigned char siriResponseMode : 1; } _has;
}

@property (copy, nonatomic) NSString *dialogPhase;
@property (nonatomic) BOOL hasDialogPhase;
@property (nonatomic) int presentationType;
@property (nonatomic) BOOL hasPresentationType;
@property (nonatomic) int siriResponseMode;
@property (nonatomic) BOOL hasSiriResponseMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDialogPhase;
- (void)deletePresentationType;
- (void)deleteSiriResponseMode;

@end
