@class NSString, NSMutableArray, SGMIMetricsInferenceAndGroundTruth;

@interface SGMIMetricsMailIntelligenceForMessage : PBCodable <NSCopying> {
    struct { unsigned char hoursSinceReference : 1; unsigned char nbCharactersInMailSubject : 1; unsigned char nbTokensInMailSubject : 1; unsigned char previousInteractionFromUserOnConversationInMinutes : 1; unsigned char previousInteractionOnConversationInMinutes : 1; unsigned char senderConnectionScore : 1; unsigned char timeDifferenceFromReceptionToSaliencyInferenceInSeconds : 1; } _has;
}

@property (nonatomic) char hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) char hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) char hasTimeDifferenceFromReceptionToSaliencyInferenceInSeconds;
@property (nonatomic) unsigned int timeDifferenceFromReceptionToSaliencyInferenceInSeconds;
@property (nonatomic) char hasSenderConnectionScore;
@property (nonatomic) float senderConnectionScore;
@property (retain, nonatomic) NSMutableArray *mailAttachmentHistograms;
@property (nonatomic) char hasNbCharactersInMailSubject;
@property (nonatomic) unsigned int nbCharactersInMailSubject;
@property (nonatomic) char hasNbTokensInMailSubject;
@property (nonatomic) unsigned int nbTokensInMailSubject;
@property (nonatomic) char hasPreviousInteractionOnConversationInMinutes;
@property (nonatomic) unsigned int previousInteractionOnConversationInMinutes;
@property (nonatomic) char hasPreviousInteractionFromUserOnConversationInMinutes;
@property (nonatomic) unsigned int previousInteractionFromUserOnConversationInMinutes;
@property (readonly, nonatomic) char hasActive;
@property (retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *active;
@property (readonly, nonatomic) char hasBackground;
@property (retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *background;

+ (Class)mailAttachmentHistogramType;

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
- (id)mailAttachmentHistogramAtIndex:(unsigned long long)a0;
- (void)addMailAttachmentHistogram:(id)a0;
- (void)clearMailAttachmentHistograms;
- (unsigned long long)mailAttachmentHistogramsCount;

@end
