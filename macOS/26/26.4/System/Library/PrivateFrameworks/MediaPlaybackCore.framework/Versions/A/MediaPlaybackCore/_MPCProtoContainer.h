@class _MPCProtoContainerIdentifierSet, NSMutableArray, NSString;

@interface _MPCProtoContainer : PBCodable <NSCopying> {
    int _containerType;
    _MPCProtoContainerIdentifierSet *_identifierSet;
    NSMutableArray *_items;
    NSString *_playActivityFeatureName;
    NSString *_playActivityQueueGroupingID;
    struct { unsigned char containerType : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
