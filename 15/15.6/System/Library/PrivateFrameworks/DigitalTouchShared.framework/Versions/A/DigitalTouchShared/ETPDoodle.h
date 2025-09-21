@class NSData;

@interface ETPDoodle : PBCodable <NSCopying> {
    struct { unsigned char doodleCount : 1; } _has;
}

@property (nonatomic) char hasDoodleCount;
@property (nonatomic) unsigned int doodleCount;
@property (readonly, nonatomic) char hasDoodleData;
@property (retain, nonatomic) NSData *doodleData;
@property (readonly, nonatomic) char hasColorData;
@property (retain, nonatomic) NSData *colorData;
@property (readonly, nonatomic) char hasPointTimeDeltaData;
@property (retain, nonatomic) NSData *pointTimeDeltaData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
