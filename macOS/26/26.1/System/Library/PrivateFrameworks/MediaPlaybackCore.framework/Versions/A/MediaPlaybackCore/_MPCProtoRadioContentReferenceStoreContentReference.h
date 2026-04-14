@interface _MPCProtoRadioContentReferenceStoreContentReference : PBCodable <NSCopying> {
    long long _storeAdamID;
    struct { unsigned char storeAdamID : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
