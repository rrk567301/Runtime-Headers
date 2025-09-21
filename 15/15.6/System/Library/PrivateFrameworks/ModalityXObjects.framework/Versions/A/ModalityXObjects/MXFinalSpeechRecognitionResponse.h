@class NSString, MXRecognitionResult, MXAudioAnalytics, MXLatnnMitigatorResult;

@interface MXFinalSpeechRecognitionResponse : PBCodable <NSCopying> {
    struct { unsigned char watermarkPeakAverage : 1; unsigned char langProfileRecreateCodes : 1; unsigned char returnCode : 1; unsigned char watermarkDetection : 1; unsigned char hasResult : 1; } _has;
}

@property (readonly, nonatomic) char hasSpeechId;
@property (retain, nonatomic) NSString *speechId;
@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) char hasReturnCode;
@property (nonatomic) int returnCode;
@property (readonly, nonatomic) char hasReturnStr;
@property (retain, nonatomic) NSString *returnStr;
@property (readonly, nonatomic) char hasRecognitionResult;
@property (retain, nonatomic) MXRecognitionResult *recognitionResult;
@property (nonatomic) char hasLangProfileRecreateCodes;
@property (nonatomic) int langProfileRecreateCodes;
@property (readonly, nonatomic) char hasAudioAnalytics;
@property (retain, nonatomic) MXAudioAnalytics *audioAnalytics;
@property (nonatomic) char hasWatermarkDetection;
@property (nonatomic) int watermarkDetection;
@property (nonatomic) char hasWatermarkPeakAverage;
@property (nonatomic) double watermarkPeakAverage;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasLatnnMitigatorResult;
@property (retain, nonatomic) MXLatnnMitigatorResult *latnnMitigatorResult;
@property (readonly, nonatomic) char hasRequestLocale;
@property (retain, nonatomic) NSString *requestLocale;
@property (nonatomic) char hasHasResult;
@property (nonatomic) char hasResult;

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
- (int)StringAsLangProfileRecreateCodes:(id)a0;
- (int)StringAsWatermarkDetection:(id)a0;
- (id)langProfileRecreateCodesAsString:(int)a0;
- (id)watermarkDetectionAsString:(int)a0;

@end
