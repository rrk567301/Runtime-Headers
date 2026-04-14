@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryArtistContentReference : PBCodable <NSCopying> {
    long long _representativeItemCloudID;
    long long _storeAdamID;
    NSString *_artistName;
    NSString *_playbackAuthorizationToken;
    struct { unsigned char representativeItemCloudID : 1; unsigned char storeAdamID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
