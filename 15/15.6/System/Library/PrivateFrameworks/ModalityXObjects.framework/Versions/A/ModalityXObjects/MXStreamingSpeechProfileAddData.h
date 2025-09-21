@class NSString, MXSpeechProfileSourceData, NSData;

@interface MXStreamingSpeechProfileAddData : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) char hasSourceData;
@property (retain, nonatomic) MXSpeechProfileSourceData *sourceData;
@property (readonly, nonatomic) char hasExistingLanguageProfile;
@property (retain, nonatomic) NSData *existingLanguageProfile;
@property (readonly, nonatomic) char hasExistingPronunciationCache;
@property (retain, nonatomic) NSData *existingPronunciationCache;

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
