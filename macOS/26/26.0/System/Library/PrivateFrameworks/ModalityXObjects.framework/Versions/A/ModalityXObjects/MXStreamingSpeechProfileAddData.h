@class NSString, MXSpeechProfileSourceData, NSData;

@interface MXStreamingSpeechProfileAddData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) BOOL hasSourceData;
@property (retain, nonatomic) MXSpeechProfileSourceData *sourceData;
@property (readonly, nonatomic) BOOL hasExistingLanguageProfile;
@property (retain, nonatomic) NSData *existingLanguageProfile;
@property (readonly, nonatomic) BOOL hasExistingPronunciationCache;
@property (retain, nonatomic) NSData *existingPronunciationCache;

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

@end
