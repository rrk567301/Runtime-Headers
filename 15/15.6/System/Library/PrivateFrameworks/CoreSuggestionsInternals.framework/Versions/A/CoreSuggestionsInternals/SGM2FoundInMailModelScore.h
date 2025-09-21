@class NSString;

@interface SGM2FoundInMailModelScore : PBCodable <NSCopying> {
    struct { unsigned char contactDetail : 1; unsigned char mode : 1; unsigned char model : 1; unsigned char supervision : 1; unsigned char correct : 1; unsigned char result : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasModel;
@property (nonatomic) int model;
@property (nonatomic) char hasContactDetail;
@property (nonatomic) int contactDetail;
@property (nonatomic) char hasResult;
@property (nonatomic) char result;
@property (nonatomic) char hasCorrect;
@property (nonatomic) char correct;
@property (nonatomic) char hasMode;
@property (nonatomic) int mode;
@property (nonatomic) char hasSupervision;
@property (nonatomic) int supervision;

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
- (int)StringAsMode:(id)a0;
- (id)modeAsString:(int)a0;
- (int)StringAsModel:(id)a0;
- (int)StringAsContactDetail:(id)a0;
- (int)StringAsSupervision:(id)a0;
- (id)contactDetailAsString:(int)a0;
- (id)modelAsString:(int)a0;
- (id)supervisionAsString:(int)a0;

@end
