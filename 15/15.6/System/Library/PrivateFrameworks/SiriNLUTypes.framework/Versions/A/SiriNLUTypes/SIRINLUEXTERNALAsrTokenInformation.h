@class NSString;

@interface SIRINLUEXTERNALAsrTokenInformation : PBCodable <NSCopying> {
    struct { unsigned char confidenceScore : 1; unsigned char beginIndex : 1; unsigned char endIndex : 1; unsigned char endMilliSeconds : 1; unsigned char startMilliSeconds : 1; unsigned char addSpaceAfter : 1; unsigned char removeSpaceAfter : 1; unsigned char removeSpaceBefore : 1; } _has;
}

@property (readonly, nonatomic) char hasPostItnText;
@property (retain, nonatomic) NSString *postItnText;
@property (readonly, nonatomic) char hasPhoneSequence;
@property (retain, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) char hasIpaPhoneSequence;
@property (retain, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) char hasAddSpaceAfter;
@property (nonatomic) char addSpaceAfter;
@property (nonatomic) char hasRemoveSpaceAfter;
@property (nonatomic) char removeSpaceAfter;
@property (nonatomic) char hasRemoveSpaceBefore;
@property (nonatomic) char removeSpaceBefore;
@property (nonatomic) char hasConfidenceScore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) char hasBeginIndex;
@property (nonatomic) unsigned int beginIndex;
@property (nonatomic) char hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) char hasStartMilliSeconds;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) char hasEndMilliSeconds;
@property (nonatomic) int endMilliSeconds;

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
