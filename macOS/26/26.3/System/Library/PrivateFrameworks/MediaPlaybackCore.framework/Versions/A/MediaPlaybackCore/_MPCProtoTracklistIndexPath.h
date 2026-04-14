@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {
    long long _containerIndex;
    long long _itemIndex;
    struct { unsigned char containerIndex : 1; unsigned char itemIndex : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
