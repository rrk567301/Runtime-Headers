@interface IDSQRProtoMaterialOwner : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _materialTypes;
}

@property (nonatomic) unsigned long long participantId;
@property (readonly, nonatomic) unsigned long long materialTypesCount;
@property (readonly, nonatomic) int *materialTypes;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearMaterialTypes;
- (void)addMaterialType:(int)a0;
- (int)materialTypeAtIndex:(unsigned long long)a0;
- (void)setMaterialTypes:(int *)a0 count:(unsigned long long)a1;
- (id)materialTypesAsString:(int)a0;
- (int)StringAsMaterialTypes:(id)a0;

@end
