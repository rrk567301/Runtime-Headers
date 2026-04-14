@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <NSCopying> {
    NSMutableArray *_accountInfos;
    NSMutableArray *_containers;
    int _shuffleMode;
    _MPCProtoTracklistIndexPath *_startingItemIndexPath;
    struct { unsigned char shuffleMode : 1; } _has;
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
