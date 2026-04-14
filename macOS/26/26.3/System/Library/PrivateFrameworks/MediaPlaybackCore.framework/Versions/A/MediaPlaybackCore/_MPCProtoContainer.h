@class _MPCProtoContainerIdentifierSet, NSMutableArray, NSString;

@interface _MPCProtoContainer : PBCodable <NSCopying> {
    int _containerType;
    _MPCProtoContainerIdentifierSet *_identifierSet;
    NSMutableArray *_items;
    NSString *_playActivityFeatureName;
    NSString *_playActivityQueueGroupingID;
    struct { unsigned char containerType : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
