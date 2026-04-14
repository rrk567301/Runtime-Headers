@interface IDSQRProtoMaterialOwner : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _materialTypes;
}

@property (nonatomic) unsigned long long participantId;
@property (readonly, nonatomic) unsigned long long materialTypesCount;
@property (readonly, nonatomic) int *materialTypes;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsMaterialTypes:(id)a0;
- (void)addMaterialType:(int)a0;
- (void)clearMaterialTypes;
- (int)materialTypeAtIndex:(unsigned long long)a0;
- (id)materialTypesAsString:(int)a0;
- (void)setMaterialTypes:(int *)a0 count:(unsigned long long)a1;

@end
