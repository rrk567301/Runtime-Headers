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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
