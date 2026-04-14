@class NSString;

@interface _MPCProtoContainerIdentifierSet : PBCodable <NSCopying> {
    long long _cloudID;
    long long _delegateInfoID;
    long long _storeAdamID;
    NSString *_cloudCollectionID;
    NSString *_cloudUniversalLibraryID;
    NSString *_radioStationID;
    NSString *_storePlaylistGlobalID;
    NSString *_storePlaylistVersionHash;
    struct { unsigned char cloudID : 1; unsigned char delegateInfoID : 1; unsigned char storeAdamID : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
