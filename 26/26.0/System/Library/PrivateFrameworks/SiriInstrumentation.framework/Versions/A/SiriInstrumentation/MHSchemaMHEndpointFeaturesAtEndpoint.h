@class NSData;

@interface MHSchemaMHEndpointFeaturesAtEndpoint : SISchemaInstrumentationMessage {
    struct { unsigned char trailingSilenceDurationInNs : 1; unsigned char clientSilenceFramesCountInNs : 1; unsigned char endOfSentenceLikelihood : 1; unsigned char wordCount : 1; unsigned char serverFeaturesLatencyInNs : 1; unsigned char clientSilenceProbability : 1; unsigned char rcTrailingSilenceDuration : 1; unsigned char rcEndOfSentenceLikelihood : 1; unsigned char rcWordCount : 1; unsigned char rcServerFeaturesLatency : 1; unsigned char silencePosterior : 1; unsigned char acousticEndpointerScore : 1; unsigned char silencePosteriorFrameCountInNs : 1; } _has;
}

@property (nonatomic) unsigned long long trailingSilenceDurationInNs;
@property (nonatomic) BOOL hasTrailingSilenceDurationInNs;
@property (nonatomic) unsigned long long clientSilenceFramesCountInNs;
@property (nonatomic) BOOL hasClientSilenceFramesCountInNs;
@property (nonatomic) float endOfSentenceLikelihood;
@property (nonatomic) BOOL hasEndOfSentenceLikelihood;
@property (nonatomic) unsigned int wordCount;
@property (nonatomic) BOOL hasWordCount;
@property (nonatomic) unsigned long long serverFeaturesLatencyInNs;
@property (nonatomic) BOOL hasServerFeaturesLatencyInNs;
@property (nonatomic) float clientSilenceProbability;
@property (nonatomic) BOOL hasClientSilenceProbability;
@property (nonatomic) unsigned long long rcTrailingSilenceDuration;
@property (nonatomic) BOOL hasRcTrailingSilenceDuration;
@property (nonatomic) float rcEndOfSentenceLikelihood;
@property (nonatomic) BOOL hasRcEndOfSentenceLikelihood;
@property (nonatomic) unsigned int rcWordCount;
@property (nonatomic) BOOL hasRcWordCount;
@property (nonatomic) unsigned long long rcServerFeaturesLatency;
@property (nonatomic) BOOL hasRcServerFeaturesLatency;
@property (nonatomic) float silencePosterior;
@property (nonatomic) BOOL hasSilencePosterior;
@property (nonatomic) float acousticEndpointerScore;
@property (nonatomic) BOOL hasAcousticEndpointerScore;
@property (nonatomic) float silencePosteriorFrameCountInNs;
@property (nonatomic) BOOL hasSilencePosteriorFrameCountInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteRcTrailingSilenceDuration;
- (void)deleteRcEndOfSentenceLikelihood;
- (void)deleteServerFeaturesLatencyInNs;
- (void)deleteWordCount;
- (void)deleteAcousticEndpointerScore;
- (void)deleteClientSilenceFramesCountInNs;
- (void)deleteClientSilenceProbability;
- (void)deleteEndOfSentenceLikelihood;
- (void)deleteRcServerFeaturesLatency;
- (void)deleteRcWordCount;
- (void)deleteSilencePosterior;
- (void)deleteSilencePosteriorFrameCountInNs;
- (void)deleteTrailingSilenceDurationInNs;

@end
