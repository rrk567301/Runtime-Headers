@class NSString, MXProcessingError, NSData;

@interface MXSpeechProfileBuildResponse : PBCodable <NSCopying> {
    struct { unsigned char incompleteProfile : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) MXProcessingError *error;
@property (nonatomic) char hasIncompleteProfile;
@property (nonatomic) char incompleteProfile;
@property (readonly, nonatomic) char hasLanguageProfile;
@property (retain, nonatomic) NSData *languageProfile;
@property (readonly, nonatomic) char hasPronunciationCache;
@property (retain, nonatomic) NSData *pronunciationCache;

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
