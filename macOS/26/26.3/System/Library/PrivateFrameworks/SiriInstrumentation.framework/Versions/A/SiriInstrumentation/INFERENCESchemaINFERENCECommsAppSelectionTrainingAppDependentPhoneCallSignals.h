@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appAffinityScoreForPhoneCall : 1; unsigned char appAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appAffinityScoreForPhoneCallReceived : 1; unsigned char appFreqForPhoneCall : 1; unsigned char appFreqForPhoneCallUsingSiri : 1; unsigned char appFreqForPhoneCallForCountryCode : 1; } _has;
}

@property (nonatomic) float appAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCall;
@property (nonatomic) float appAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallReceived;
@property (nonatomic) int appFreqForPhoneCall;
@property (nonatomic) BOOL hasAppFreqForPhoneCall;
@property (nonatomic) int appFreqForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppFreqForPhoneCallUsingSiri;
@property (nonatomic) int appFreqForPhoneCallForCountryCode;
@property (nonatomic) BOOL hasAppFreqForPhoneCallForCountryCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAppAffinityScoreForPhoneCall;
- (void)deleteAppAffinityScoreForPhoneCallReceived;
- (void)deleteAppAffinityScoreForPhoneCallUsingSiri;
- (void)deleteAppFreqForPhoneCall;
- (void)deleteAppFreqForPhoneCallForCountryCode;
- (void)deleteAppFreqForPhoneCallUsingSiri;

@end
