@class NSString, NSData;

@interface ACTVSchemaACTVButtonInteractionDetected : SISchemaInstrumentationMessage {
    struct { unsigned char buttonInteractionType : 1; } _has;
}

@property (nonatomic) int buttonInteractionType;
@property (nonatomic) BOOL hasButtonInteractionType;
@property (copy, nonatomic) NSString *buttonName;
@property (nonatomic) BOOL hasButtonName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteButtonInteractionType;
- (void)deleteButtonName;

@end
