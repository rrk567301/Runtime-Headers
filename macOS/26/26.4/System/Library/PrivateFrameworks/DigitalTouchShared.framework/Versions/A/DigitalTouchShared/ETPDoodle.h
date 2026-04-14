@class NSData;

@interface ETPDoodle : PBCodable <NSCopying> {
    struct { unsigned char doodleCount : 1; } _has;
}

@property (nonatomic) BOOL hasDoodleCount;
@property (nonatomic) unsigned int doodleCount;
@property (readonly, nonatomic) BOOL hasDoodleData;
@property (retain, nonatomic) NSData *doodleData;
@property (readonly, nonatomic) BOOL hasColorData;
@property (retain, nonatomic) NSData *colorData;
@property (readonly, nonatomic) BOOL hasPointTimeDeltaData;
@property (retain, nonatomic) NSData *pointTimeDeltaData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
