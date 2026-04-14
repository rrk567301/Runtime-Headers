@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <NSCopying> {
    NSMutableArray *_accountInfos;
    NSMutableArray *_containers;
    int _shuffleMode;
    _MPCProtoTracklistIndexPath *_startingItemIndexPath;
    struct { unsigned char shuffleMode : 1; } _has;
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
