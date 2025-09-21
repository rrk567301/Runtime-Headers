@class NSString;

@interface SGM2SelfIdModelScore : PBCodable <NSCopying> {
    struct { unsigned char model : 1; unsigned char supervision : 1; unsigned char result : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasModel;
@property (nonatomic) int model;
@property (nonatomic) char hasResult;
@property (nonatomic) char result;
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
- (int)StringAsModel:(id)a0;
- (int)StringAsSupervision:(id)a0;
- (id)modelAsString:(int)a0;
- (id)supervisionAsString:(int)a0;

@end
