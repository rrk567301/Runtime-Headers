@class NSMutableArray;

@interface MXAudioAnalytics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *speechRecognitionFeatures;
@property (retain, nonatomic) NSMutableArray *acousticFeatures;

+ (Class)acousticFeaturesType;
+ (Class)speechRecognitionFeaturesType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)acousticFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)acousticFeaturesCount;
- (void)addAcousticFeatures:(id)a0;
- (void)addSpeechRecognitionFeatures:(id)a0;
- (void)clearAcousticFeatures;
- (void)clearSpeechRecognitionFeatures;
- (id)speechRecognitionFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)speechRecognitionFeaturesCount;

@end
