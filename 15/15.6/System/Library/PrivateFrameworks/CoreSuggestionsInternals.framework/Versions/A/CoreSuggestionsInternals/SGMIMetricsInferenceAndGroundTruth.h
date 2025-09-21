@class SGMIMetricsTrialMetadata, SGMIMetricsSubmodelsProbabilities, NSMutableArray;

@interface SGMIMetricsInferenceAndGroundTruth : PBCodable <NSCopying> {
    struct { unsigned char missingAttachmentPredictionPerformanceInMilliSeconds : 1; unsigned char missingRecipientPredictionPerformanceInMilliSeconds : 1; unsigned char saliencyPredictionPerformanceInMilliSeconds : 1; unsigned char predictedSaliency : 1; unsigned char predictedSaliencyScore : 1; unsigned char estimatedGroundTruth : 1; } _has;
}

@property (readonly, nonatomic) char hasTrialMetadata;
@property (retain, nonatomic) SGMIMetricsTrialMetadata *trialMetadata;
@property (readonly, nonatomic) char hasSubmodelsProbabilities;
@property (retain, nonatomic) SGMIMetricsSubmodelsProbabilities *submodelsProbabilities;
@property (nonatomic) char hasPredictedSaliencyScore;
@property (nonatomic) float predictedSaliencyScore;
@property (nonatomic) char hasPredictedSaliency;
@property (nonatomic) int predictedSaliency;
@property (nonatomic) char hasSaliencyPredictionPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long saliencyPredictionPerformanceInMilliSeconds;
@property (nonatomic) char hasEstimatedGroundTruth;
@property (nonatomic) char estimatedGroundTruth;
@property (retain, nonatomic) NSMutableArray *missingAttachments;
@property (nonatomic) char hasMissingAttachmentPredictionPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long missingAttachmentPredictionPerformanceInMilliSeconds;
@property (retain, nonatomic) NSMutableArray *missingRecipients;
@property (nonatomic) char hasMissingRecipientPredictionPerformanceInMilliSeconds;
@property (nonatomic) unsigned long long missingRecipientPredictionPerformanceInMilliSeconds;

+ (Class)missingAttachmentType;
+ (Class)missingRecipientType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPredictedSaliency:(id)a0;
- (void)addMissingAttachment:(id)a0;
- (void)addMissingRecipient:(id)a0;
- (void)clearMissingAttachments;
- (void)clearMissingRecipients;
- (id)missingAttachmentAtIndex:(unsigned long long)a0;
- (unsigned long long)missingAttachmentsCount;
- (id)missingRecipientAtIndex:(unsigned long long)a0;
- (unsigned long long)missingRecipientsCount;
- (id)predictedSaliencyAsString:(int)a0;

@end
