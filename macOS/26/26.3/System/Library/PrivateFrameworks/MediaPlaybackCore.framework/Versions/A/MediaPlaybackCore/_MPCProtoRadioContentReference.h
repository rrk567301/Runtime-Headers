@class _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying> {
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;
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
