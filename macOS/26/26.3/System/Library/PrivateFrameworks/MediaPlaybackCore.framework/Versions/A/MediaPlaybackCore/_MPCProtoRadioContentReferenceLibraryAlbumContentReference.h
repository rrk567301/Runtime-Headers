@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <NSCopying> {
    long long _representativeItemCloudID;
    long long _storeAdamID;
    NSString *_albumName;
    struct { unsigned char representativeItemCloudID : 1; unsigned char storeAdamID : 1; } _has;
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
