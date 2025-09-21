@interface SGM2BirthdayExtractionWithSupervision : PBCodable <NSCopying> {
    struct { unsigned char modelVersion : 1; unsigned char offset : 1; unsigned char dateIsCorrect : 1; unsigned char didRegexTrigger : 1; unsigned char didResponseKitTrigger : 1; unsigned char isFromCongratulation : 1; } _has;
}

@property (nonatomic) char hasDateIsCorrect;
@property (nonatomic) char dateIsCorrect;
@property (nonatomic) char hasIsFromCongratulation;
@property (nonatomic) char isFromCongratulation;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) char hasDidRegexTrigger;
@property (nonatomic) char didRegexTrigger;
@property (nonatomic) char hasOffset;
@property (nonatomic) int offset;
@property (nonatomic) char hasDidResponseKitTrigger;
@property (nonatomic) char didResponseKitTrigger;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOffset:(id)a0;
- (id)offsetAsString:(int)a0;

@end
