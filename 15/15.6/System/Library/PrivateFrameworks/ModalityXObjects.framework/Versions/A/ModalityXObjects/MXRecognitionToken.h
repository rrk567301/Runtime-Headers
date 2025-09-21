@class NSString;

@interface MXRecognitionToken : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char endMilliSeconds : 1; unsigned char silenceStartMilliSeconds : 1; unsigned char startMilliSeconds : 1; unsigned char addSpaceAfter : 1; } _has;
}

@property (readonly, nonatomic) char hasTokenText;
@property (retain, nonatomic) NSString *tokenText;
@property (nonatomic) char hasStartMilliSeconds;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) char hasEndMilliSeconds;
@property (nonatomic) int endMilliSeconds;
@property (nonatomic) char hasSilenceStartMilliSeconds;
@property (nonatomic) int silenceStartMilliSeconds;
@property (nonatomic) char hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) char hasAddSpaceAfter;
@property (nonatomic) char addSpaceAfter;
@property (readonly, nonatomic) char hasPhoneSeq;
@property (retain, nonatomic) NSString *phoneSeq;
@property (readonly, nonatomic) char hasIpaPhoneSeq;
@property (retain, nonatomic) NSString *ipaPhoneSeq;

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
