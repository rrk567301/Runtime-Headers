@class NSArray, NSData;

@interface ODDSiriSchemaODDAppleIntelligenceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAppleIntelligenceEnabled : 1; unsigned char isRecordAppleIntelligenceActivity : 1; unsigned char isAppleIntelligenceHardwareCapable : 1; unsigned char isAppleIntelligenceAvailable : 1; unsigned char isChatGPTEnabled : 1; unsigned char isChatGPTConfirmationAlwaysRequired : 1; unsigned char chatGPTAccountType : 1; unsigned char isChatGPTSetUpPrompts : 1; unsigned char isGenAIConfirmationAlwaysRequired : 1; unsigned char genAIAccountType : 1; unsigned char isGenAISetUpPrompts : 1; } _has;
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
@property (nonatomic) BOOL isChatGPTConfirmationAlwaysRequired;
@property (nonatomic) BOOL hasIsChatGPTConfirmationAlwaysRequired;
@property (nonatomic) int chatGPTAccountType;
@property (nonatomic) BOOL hasChatGPTAccountType;
@property (nonatomic) BOOL isChatGPTSetUpPrompts;
@property (nonatomic) BOOL hasIsChatGPTSetUpPrompts;
@property (copy, nonatomic) NSArray *genAIAgentsEnableds;
@property (nonatomic) BOOL isGenAIConfirmationAlwaysRequired;
@property (nonatomic) BOOL hasIsGenAIConfirmationAlwaysRequired;
@property (nonatomic) int genAIAccountType;
@property (nonatomic) BOOL hasGenAIAccountType;
@property (nonatomic) BOOL isGenAISetUpPrompts;
@property (nonatomic) BOOL hasIsGenAISetUpPrompts;
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
- (void)addGenAIAgentsEnabled:(int)a0;
- (void)clearGenAIAgentsEnabled;
- (void)deleteChatGPTAccountType;
- (void)deleteGenAIAccountType;
- (void)deleteGenAIAgentsEnabled;
- (void)deleteIsAppleIntelligenceAvailable;
- (void)deleteIsAppleIntelligenceEnabled;
- (void)deleteIsAppleIntelligenceHardwareCapable;
- (void)deleteIsChatGPTConfirmationAlwaysRequired;
- (void)deleteIsChatGPTEnabled;
- (void)deleteIsChatGPTSetUpPrompts;
- (void)deleteIsGenAIConfirmationAlwaysRequired;
- (void)deleteIsGenAISetUpPrompts;
- (void)deleteIsRecordAppleIntelligenceActivity;
- (int)genAIAgentsEnabledAtIndex:(unsigned long long)a0;
- (unsigned long long)genAIAgentsEnabledCount;

@end
