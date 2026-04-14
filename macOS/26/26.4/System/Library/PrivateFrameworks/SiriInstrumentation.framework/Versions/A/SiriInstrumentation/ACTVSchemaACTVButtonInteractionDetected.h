@class NSString, NSData;

@interface ACTVSchemaACTVButtonInteractionDetected : SISchemaInstrumentationMessage {
    struct { unsigned char buttonInteractionType : 1; } _has;
}

@property (nonatomic) int buttonInteractionType;
@property (nonatomic) BOOL hasButtonInteractionType;
@property (copy, nonatomic) NSString *buttonName;
@property (nonatomic) BOOL hasButtonName;
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
- (void)deleteButtonInteractionType;
- (void)deleteButtonName;

@end
