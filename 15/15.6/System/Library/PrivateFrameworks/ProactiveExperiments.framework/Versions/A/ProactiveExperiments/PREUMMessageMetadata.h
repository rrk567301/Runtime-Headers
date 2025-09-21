@class NSString;

@interface PREUMMessageMetadata : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char charCount : 1; unsigned char hasQuestionMark : 1; unsigned char isApricotDevice : 1; } _has;
}

@property (readonly, nonatomic) char hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) char hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) char hasIsApricotDevice;
@property (nonatomic) char isApricotDevice;
@property (nonatomic) char hasCharCount;
@property (nonatomic) unsigned int charCount;
@property (nonatomic) char hasAgeGroup;
@property (nonatomic) int ageGroup;
@property (nonatomic) char hasHasQuestionMark;
@property (nonatomic) char hasQuestionMark;

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
- (int)StringAsAgeGroup:(id)a0;
- (id)ageGroupAsString:(int)a0;

@end
