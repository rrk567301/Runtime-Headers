@interface NSPPrivacyProxyPolicy : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _conditions;
}

@property (readonly, nonatomic) unsigned long long conditionsCount;
@property (readonly, nonatomic) int *conditions;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (int)conditionsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addConditions:(int)a0;
- (id)conditionsAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void)clearConditions;
- (void)setConditions:(int *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsConditions:(id)a0;

@end
