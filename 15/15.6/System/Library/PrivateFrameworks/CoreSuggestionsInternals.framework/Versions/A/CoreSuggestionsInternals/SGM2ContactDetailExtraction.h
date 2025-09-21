@class NSString;

@interface SGM2ContactDetailExtraction : PBCodable <NSCopying> {
    struct { unsigned char detail : 1; unsigned char extractionModelVersion : 1; unsigned char extractionSignatureSource : 1; unsigned char foundInSenderCNContact : 1; unsigned char outcome : 1; unsigned char source : 1; unsigned char isUnlikelyPhone : 1; unsigned char signature : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (nonatomic) char hasSignature;
@property (nonatomic) char signature;
@property (nonatomic) char hasDetail;
@property (nonatomic) int detail;
@property (nonatomic) char hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) char hasFoundInSenderCNContact;
@property (nonatomic) int foundInSenderCNContact;
@property (nonatomic) char hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) char hasIsUnlikelyPhone;
@property (nonatomic) char isUnlikelyPhone;
@property (nonatomic) char hasExtractionSignatureSource;
@property (nonatomic) int extractionSignatureSource;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsOutcome:(id)a0;
- (id)outcomeAsString:(int)a0;
- (int)StringAsDetail:(id)a0;
- (int)StringAsExtractionSignatureSource:(id)a0;
- (id)detailAsString:(int)a0;
- (int)StringAsFoundInSenderCNContact:(id)a0;
- (id)foundInSenderCNContactAsString:(int)a0;
- (id)extractionSignatureSourceAsString:(int)a0;

@end
