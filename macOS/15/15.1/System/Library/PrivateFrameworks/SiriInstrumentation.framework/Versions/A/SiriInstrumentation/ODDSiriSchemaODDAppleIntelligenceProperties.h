@class NSData;

@interface ODDSiriSchemaODDAppleIntelligenceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAppleIntelligenceEnabled : 1; unsigned char isRecordAppleIntelligenceActivity : 1; unsigned char isAppleIntelligenceHardwareCapable : 1; unsigned char isAppleIntelligenceAvailable : 1; unsigned char isChatGPTEnabled : 1; } _has;
}

@property (nonatomic) BOOL isAppleIntelligenceEnabled;
@property (nonatomic) BOOL hasIsAppleIntelligenceEnabled;
@property (nonatomic) BOOL isRecordAppleIntelligenceActivity;
@property (nonatomic) BOOL hasIsRecordAppleIntelligenceActivity;
@property (nonatomic) BOOL isAppleIntelligenceHardwareCapable;
@property (nonatomic) BOOL hasIsAppleIntelligenceHardwareCapable;
@property (nonatomic) BOOL isAppleIntelligenceAvailable;
@property (nonatomic) BOOL hasIsAppleIntelligenceAvailable;
@property (nonatomic) BOOL isChatGPTEnabled;
@property (nonatomic) BOOL hasIsChatGPTEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAppleIntelligenceAvailable;
- (void)deleteIsAppleIntelligenceEnabled;
- (void)deleteIsAppleIntelligenceHardwareCapable;
- (void)deleteIsChatGPTEnabled;
- (void)deleteIsRecordAppleIntelligenceActivity;
- (id)suppressMessageUnderConditions;

@end
