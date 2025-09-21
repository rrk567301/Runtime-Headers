@class NSString, NSMutableArray, NSData;

@interface CESRCorrectionPronunciation : PBCodable <NSCopying> {
    struct { unsigned char tokenOffset : 1; } _has;
}

@property (readonly, nonatomic) char hasOrthography;
@property (retain, nonatomic) NSString *orthography;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasApgId;
@property (retain, nonatomic) NSString *apgId;
@property (readonly, nonatomic) char hasTtsVersion;
@property (retain, nonatomic) NSString *ttsVersion;
@property (nonatomic) char hasTokenOffset;
@property (nonatomic) int tokenOffset;
@property (retain, nonatomic) NSMutableArray *ttsPronunciations;
@property (readonly, nonatomic) char hasAsrPronunciationData;
@property (retain, nonatomic) NSData *asrPronunciationData;

+ (Class)ttsPronunciationsType;

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
- (void)addTtsPronunciations:(id)a0;
- (void)clearTtsPronunciations;
- (id)ttsPronunciationsAtIndex:(unsigned long long)a0;
- (unsigned long long)ttsPronunciationsCount;

@end
