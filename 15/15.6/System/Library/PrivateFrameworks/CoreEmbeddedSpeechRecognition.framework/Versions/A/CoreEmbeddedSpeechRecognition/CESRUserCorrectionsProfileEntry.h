@class NSString, CESRCorrectionPronunciation;

@interface CESRUserCorrectionsProfileEntry : PBCodable <NSCopying> {
    struct { unsigned char alternativesCorrectionsCount : 1; unsigned char spellingCorrectionsCount : 1; unsigned char tap2editCorrectionsCount : 1; } _has;
}

@property (readonly, nonatomic) char hasCorrectedText;
@property (retain, nonatomic) NSString *correctedText;
@property (readonly, nonatomic) char hasPronunciationData;
@property (retain, nonatomic) CESRCorrectionPronunciation *pronunciationData;
@property (nonatomic) char hasSpellingCorrectionsCount;
@property (nonatomic) unsigned int spellingCorrectionsCount;
@property (nonatomic) char hasTap2editCorrectionsCount;
@property (nonatomic) unsigned int tap2editCorrectionsCount;
@property (nonatomic) char hasAlternativesCorrectionsCount;
@property (nonatomic) unsigned int alternativesCorrectionsCount;

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

@end
