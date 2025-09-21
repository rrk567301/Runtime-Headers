@class NSData;

@interface MHSchemaMHEndpointFeaturesAtEndpoint : SISchemaInstrumentationMessage {
    struct { unsigned char trailingSilenceDurationInNs : 1; unsigned char clientSilenceFramesCountInNs : 1; unsigned char endOfSentenceLikelihood : 1; unsigned char wordCount : 1; unsigned char serverFeaturesLatencyInNs : 1; unsigned char clientSilenceProbability : 1; unsigned char rcTrailingSilenceDuration : 1; unsigned char rcEndOfSentenceLikelihood : 1; unsigned char rcWordCount : 1; unsigned char rcServerFeaturesLatency : 1; unsigned char silencePosterior : 1; unsigned char acousticEndpointerScore : 1; unsigned char silencePosteriorFrameCountInNs : 1; } _has;
}

@property (nonatomic) unsigned long long trailingSilenceDurationInNs;
@property (nonatomic) char hasTrailingSilenceDurationInNs;
@property (nonatomic) unsigned long long clientSilenceFramesCountInNs;
@property (nonatomic) char hasClientSilenceFramesCountInNs;
@property (nonatomic) float endOfSentenceLikelihood;
@property (nonatomic) char hasEndOfSentenceLikelihood;
@property (nonatomic) unsigned int wordCount;
@property (nonatomic) char hasWordCount;
@property (nonatomic) unsigned long long serverFeaturesLatencyInNs;
@property (nonatomic) char hasServerFeaturesLatencyInNs;
@property (nonatomic) float clientSilenceProbability;
@property (nonatomic) char hasClientSilenceProbability;
@property (nonatomic) unsigned long long rcTrailingSilenceDuration;
@property (nonatomic) char hasRcTrailingSilenceDuration;
@property (nonatomic) float rcEndOfSentenceLikelihood;
@property (nonatomic) char hasRcEndOfSentenceLikelihood;
@property (nonatomic) unsigned int rcWordCount;
@property (nonatomic) char hasRcWordCount;
@property (nonatomic) unsigned long long rcServerFeaturesLatency;
@property (nonatomic) char hasRcServerFeaturesLatency;
@property (nonatomic) float silencePosterior;
@property (nonatomic) char hasSilencePosterior;
@property (nonatomic) float acousticEndpointerScore;
@property (nonatomic) char hasAcousticEndpointerScore;
@property (nonatomic) float silencePosteriorFrameCountInNs;
@property (nonatomic) char hasSilencePosteriorFrameCountInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRcEndOfSentenceLikelihood;
- (void)deleteServerFeaturesLatencyInNs;
- (void)deleteWordCount;
- (void)deleteRcTrailingSilenceDuration;
- (void)deleteAcousticEndpointerScore;
- (void)deleteClientSilenceFramesCountInNs;
- (void)deleteClientSilenceProbability;
- (void)deleteEndOfSentenceLikelihood;
- (void)deleteRcServerFeaturesLatency;
- (void)deleteRcWordCount;
- (void)deleteSilencePosterior;
- (void)deleteSilencePosteriorFrameCountInNs;
- (void)deleteTrailingSilenceDurationInNs;
- (id)suppressMessageUnderConditions;

@end
