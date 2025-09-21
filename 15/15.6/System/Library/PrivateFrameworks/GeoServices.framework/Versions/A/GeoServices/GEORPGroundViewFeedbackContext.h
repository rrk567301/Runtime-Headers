@class PBUnknownFields, NSString, PBDataReader, NSMutableArray, GEOPDMuninViewState;

@interface GEORPGroundViewFeedbackContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _visiblePlaceMuids;
    NSString *_imageId;
    unsigned long long _imdataId;
    NSMutableArray *_onscreenImageResources;
    GEOPDMuninViewState *_viewState;
    NSMutableArray *_visibleFeatureHandles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _metadataTileBuildId;
    struct { unsigned char has_imdataId : 1; unsigned char has_metadataTileBuildId : 1; unsigned char read_unknownFields : 1; unsigned char read_visiblePlaceMuids : 1; unsigned char read_imageId : 1; unsigned char read_onscreenImageResources : 1; unsigned char read_viewState : 1; unsigned char read_visibleFeatureHandles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasViewState;
@property (retain, nonatomic) GEOPDMuninViewState *viewState;
@property (nonatomic) char hasMetadataTileBuildId;
@property (nonatomic) unsigned int metadataTileBuildId;
@property (retain, nonatomic) NSMutableArray *onscreenImageResources;
@property (readonly, nonatomic) unsigned long long visiblePlaceMuidsCount;
@property (readonly, nonatomic) unsigned long long *visiblePlaceMuids;
@property (nonatomic) char hasImdataId;
@property (nonatomic) unsigned long long imdataId;
@property (readonly, nonatomic) char hasImageId;
@property (retain, nonatomic) NSString *imageId;
@property (retain, nonatomic) NSMutableArray *visibleFeatureHandles;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)onscreenImageResourceType;
+ (Class)visibleFeatureHandleType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addOnscreenImageResource:(id)a0;
- (void)addVisibleFeatureHandle:(id)a0;
- (void)addVisiblePlaceMuid:(unsigned long long)a0;
- (void)clearOnscreenImageResources;
- (void)clearUnknownFields:(char)a0;
- (void)clearVisibleFeatureHandles;
- (void)clearVisiblePlaceMuids;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)onscreenImageResourceAtIndex:(unsigned long long)a0;
- (unsigned long long)onscreenImageResourcesCount;
- (void)readAll:(char)a0;
- (void)setVisiblePlaceMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)visibleFeatureHandleAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleFeatureHandlesCount;
- (unsigned long long)visiblePlaceMuidAtIndex:(unsigned long long)a0;

@end
