@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appAffinityScoreForMessages : 1; unsigned char appAffinityScoreForMessagesUsingSiri : 1; unsigned char appAffinityScoreForMessagesReceived : 1; unsigned char appFreqForMessages : 1; unsigned char appFreqForMessagesUsingSiri : 1; unsigned char appFreqForMessagesForCountryCode : 1; } _has;
}

@property (nonatomic) float appAffinityScoreForMessages;
@property (nonatomic) char hasAppAffinityScoreForMessages;
@property (nonatomic) float appAffinityScoreForMessagesUsingSiri;
@property (nonatomic) char hasAppAffinityScoreForMessagesUsingSiri;
@property (nonatomic) float appAffinityScoreForMessagesReceived;
@property (nonatomic) char hasAppAffinityScoreForMessagesReceived;
@property (nonatomic) int appFreqForMessages;
@property (nonatomic) char hasAppFreqForMessages;
@property (nonatomic) int appFreqForMessagesUsingSiri;
@property (nonatomic) char hasAppFreqForMessagesUsingSiri;
@property (nonatomic) int appFreqForMessagesForCountryCode;
@property (nonatomic) char hasAppFreqForMessagesForCountryCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppAffinityScoreForMessages;
- (void)deleteAppAffinityScoreForMessagesReceived;
- (void)deleteAppAffinityScoreForMessagesUsingSiri;
- (void)deleteAppFreqForMessages;
- (void)deleteAppFreqForMessagesForCountryCode;
- (void)deleteAppFreqForMessagesUsingSiri;
- (id)suppressMessageUnderConditions;

@end
