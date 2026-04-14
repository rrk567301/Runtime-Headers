@class NSString, NSData;

@interface ACTVSchemaACTVButtonInteractionDetected : SISchemaInstrumentationMessage {
    struct { unsigned char buttonInteractionType : 1; } _has;
}

@property (nonatomic) int buttonInteractionType;
@property (nonatomic) BOOL hasButtonInteractionType;
@property (copy, nonatomic) NSString *buttonName;
@property (nonatomic) BOOL hasButtonName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteButtonInteractionType;
- (void)deleteButtonName;

@end
