@class NSData;

@interface ODDSiriSchemaODDAppleIntelligenceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAppleIntelligenceEnabled : 1; unsigned char isRecordAppleIntelligenceActivity : 1; } _has;
}

@property (nonatomic) BOOL isAppleIntelligenceEnabled;
@property (nonatomic) BOOL hasIsAppleIntelligenceEnabled;
@property (nonatomic) BOOL isRecordAppleIntelligenceActivity;
@property (nonatomic) BOOL hasIsRecordAppleIntelligenceActivity;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAppleIntelligenceEnabled;
- (void)deleteIsRecordAppleIntelligenceActivity;
- (id)suppressMessageUnderConditions;

@end
