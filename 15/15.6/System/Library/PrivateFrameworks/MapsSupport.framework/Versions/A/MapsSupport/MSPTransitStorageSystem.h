@class NSString, MSPTransitStorageArtwork, PBUnknownFields;
@protocol GEOTransitArtworkDataSource;

@interface MSPTransitStorageSystem : PBCodable <GEOTransitSystem, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char muid : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithSystem:(id)a0;

@end
