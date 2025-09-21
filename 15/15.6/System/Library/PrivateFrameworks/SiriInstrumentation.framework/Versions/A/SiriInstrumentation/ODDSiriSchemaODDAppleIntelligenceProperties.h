@class NSArray, NSData;

@interface ODDSiriSchemaODDAppleIntelligenceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAppleIntelligenceEnabled : 1; unsigned char isRecordAppleIntelligenceActivity : 1; unsigned char isAppleIntelligenceHardwareCapable : 1; unsigned char isAppleIntelligenceAvailable : 1; unsigned char isChatGPTEnabled : 1; unsigned char isChatGPTConfirmationAlwaysRequired : 1; unsigned char chatGPTAccountType : 1; unsigned char isChatGPTSetUpPrompts : 1; } _has;
}

@property (nonatomic) char isAppleIntelligenceEnabled;
@property (nonatomic) char hasIsAppleIntelligenceEnabled;
@property (nonatomic) char isRecordAppleIntelligenceActivity;
@property (nonatomic) char hasIsRecordAppleIntelligenceActivity;
@property (nonatomic) char isAppleIntelligenceHardwareCapable;
@property (nonatomic) char hasIsAppleIntelligenceHardwareCapable;
@property (nonatomic) char isAppleIntelligenceAvailable;
@property (nonatomic) char hasIsAppleIntelligenceAvailable;
@property (nonatomic) char isChatGPTEnabled;
@property (nonatomic) char hasIsChatGPTEnabled;
@property (nonatomic) char isChatGPTConfirmationAlwaysRequired;
@property (nonatomic) char hasIsChatGPTConfirmationAlwaysRequired;
@property (nonatomic) int chatGPTAccountType;
@property (nonatomic) char hasChatGPTAccountType;
@property (nonatomic) char isChatGPTSetUpPrompts;
@property (nonatomic) char hasIsChatGPTSetUpPrompts;
@property (copy, nonatomic) NSArray *genAIAgentsEnableds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addGenAIAgentsEnabled:(int)a0;
- (void)clearGenAIAgentsEnabled;
- (void)deleteChatGPTAccountType;
- (void)deleteGenAIAgentsEnabled;
- (void)deleteIsAppleIntelligenceAvailable;
- (void)deleteIsAppleIntelligenceEnabled;
- (void)deleteIsAppleIntelligenceHardwareCapable;
- (void)deleteIsChatGPTConfirmationAlwaysRequired;
- (void)deleteIsChatGPTEnabled;
- (void)deleteIsChatGPTSetUpPrompts;
- (void)deleteIsRecordAppleIntelligenceActivity;
- (int)genAIAgentsEnabledAtIndex:(unsigned long long)a0;
- (unsigned long long)genAIAgentsEnabledCount;
- (id)suppressMessageUnderConditions;

@end
