@class NSData;

@interface IDSQRProtoMaterialInfo : PBCodable <NSCopying> {
    struct { unsigned char shortMaterialIdLength : 1; } _has;
}

@property (retain, nonatomic) NSData *materialId;
@property (nonatomic) int materialType;
@property (retain, nonatomic) NSData *materialContent;
@property (nonatomic) BOOL hasShortMaterialIdLength;
@property (nonatomic) unsigned int shortMaterialIdLength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsMaterialType:(id)a0;
- (id)materialTypeAsString:(int)a0;

@end
