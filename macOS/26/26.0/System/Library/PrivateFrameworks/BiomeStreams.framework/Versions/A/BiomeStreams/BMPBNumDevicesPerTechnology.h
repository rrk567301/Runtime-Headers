@class NSString;

@interface BMPBNumDevicesPerTechnology : PBCodable <NSCopying> {
    struct { unsigned char number : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTechnologyString;
@property (retain, nonatomic) NSString *technologyString;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) int number;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
