@interface NSPPrivacyProxyPolicy : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _conditions;
}

@property (readonly, nonatomic) unsigned long long conditionsCount;
@property (readonly, nonatomic) int *conditions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearConditions;
- (void)addConditions:(int)a0;
- (int)conditionsAtIndex:(unsigned long long)a0;
- (int)StringAsConditions:(id)a0;
- (id)conditionsAsString:(int)a0;
- (void)setConditions:(int *)a0 count:(unsigned long long)a1;

@end
