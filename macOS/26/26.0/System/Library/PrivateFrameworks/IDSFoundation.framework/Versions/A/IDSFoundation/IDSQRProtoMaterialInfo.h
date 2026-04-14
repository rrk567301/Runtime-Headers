@class NSData;

@interface IDSQRProtoMaterialInfo : PBCodable <NSCopying> {
    struct { unsigned char shortMaterialIdLength : 1; } _has;
}

@property (retain, nonatomic) NSData *materialId;
@property (nonatomic) int materialType;
@property (retain, nonatomic) NSData *materialContent;
@property (nonatomic) BOOL hasShortMaterialIdLength;
@property (nonatomic) unsigned int shortMaterialIdLength;

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
- (int)StringAsMaterialType:(id)a0;
- (id)materialTypeAsString:(int)a0;

@end
