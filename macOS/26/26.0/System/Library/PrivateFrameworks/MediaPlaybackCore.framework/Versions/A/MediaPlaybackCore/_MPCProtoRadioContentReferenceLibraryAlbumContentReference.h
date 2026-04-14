@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <NSCopying> {
    long long _representativeItemCloudID;
    long long _storeAdamID;
    NSString *_albumName;
    struct { unsigned char representativeItemCloudID : 1; unsigned char storeAdamID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
