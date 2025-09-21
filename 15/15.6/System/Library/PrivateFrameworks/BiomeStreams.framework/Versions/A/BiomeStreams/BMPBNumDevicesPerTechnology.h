@class NSString;

@interface BMPBNumDevicesPerTechnology : PBCodable <NSCopying> {
    struct { unsigned char number : 1; } _has;
}

@property (readonly, nonatomic) char hasTechnologyString;
@property (retain, nonatomic) NSString *technologyString;
@property (nonatomic) char hasNumber;
@property (nonatomic) int number;

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
