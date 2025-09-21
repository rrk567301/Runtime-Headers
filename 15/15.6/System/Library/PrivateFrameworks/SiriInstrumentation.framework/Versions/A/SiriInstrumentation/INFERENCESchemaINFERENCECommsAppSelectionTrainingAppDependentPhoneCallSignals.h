@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appAffinityScoreForPhoneCall : 1; unsigned char appAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appAffinityScoreForPhoneCallReceived : 1; unsigned char appFreqForPhoneCall : 1; unsigned char appFreqForPhoneCallUsingSiri : 1; unsigned char appFreqForPhoneCallForCountryCode : 1; } _has;
}

@property (nonatomic) float appAffinityScoreForPhoneCall;
@property (nonatomic) char hasAppAffinityScoreForPhoneCall;
@property (nonatomic) float appAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) char hasAppAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appAffinityScoreForPhoneCallReceived;
@property (nonatomic) char hasAppAffinityScoreForPhoneCallReceived;
@property (nonatomic) int appFreqForPhoneCall;
@property (nonatomic) char hasAppFreqForPhoneCall;
@property (nonatomic) int appFreqForPhoneCallUsingSiri;
@property (nonatomic) char hasAppFreqForPhoneCallUsingSiri;
@property (nonatomic) int appFreqForPhoneCallForCountryCode;
@property (nonatomic) char hasAppFreqForPhoneCallForCountryCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppAffinityScoreForPhoneCall;
- (void)deleteAppAffinityScoreForPhoneCallReceived;
- (void)deleteAppAffinityScoreForPhoneCallUsingSiri;
- (void)deleteAppFreqForPhoneCall;
- (void)deleteAppFreqForPhoneCallForCountryCode;
- (void)deleteAppFreqForPhoneCallUsingSiri;
- (id)suppressMessageUnderConditions;

@end
