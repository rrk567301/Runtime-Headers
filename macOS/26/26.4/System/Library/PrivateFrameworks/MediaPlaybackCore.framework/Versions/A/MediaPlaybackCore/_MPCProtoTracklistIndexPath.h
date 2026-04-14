@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {
    long long _containerIndex;
    long long _itemIndex;
    struct { unsigned char containerIndex : 1; unsigned char itemIndex : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
