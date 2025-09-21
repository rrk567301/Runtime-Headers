@class NSString, GEORPPhotoWithMetadata, NSData, PBDataReader;

@interface GEORPInstructionCorrection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_comments;
    NSString *_photoId;
    GEORPPhotoWithMetadata *_photo;
    NSData *_routeStepScreenshotImageData;
    NSString *_routeStepScreenshotImageId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _routeStepIndex;
    unsigned int _routeStepSubstepIndex;
    struct { unsigned char has_routeStepIndex : 1; unsigned char has_routeStepSubstepIndex : 1; unsigned char read_comments : 1; unsigned char read_photoId : 1; unsigned char read_photo : 1; unsigned char read_routeStepScreenshotImageData : 1; unsigned char read_routeStepScreenshotImageId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasRouteStepIndex;
@property (nonatomic) unsigned int routeStepIndex;
@property (readonly, nonatomic) char hasComments;
@property (retain, nonatomic) NSString *comments;
@property (readonly, nonatomic) char hasPhoto;
@property (retain, nonatomic) GEORPPhotoWithMetadata *photo;
@property (nonatomic) char hasRouteStepSubstepIndex;
@property (nonatomic) unsigned int routeStepSubstepIndex;
@property (readonly, nonatomic) char hasRouteStepScreenshotImageData;
@property (retain, nonatomic) NSData *routeStepScreenshotImageData;
@property (readonly, nonatomic) char hasPhotoId;
@property (retain, nonatomic) NSString *photoId;
@property (readonly, nonatomic) char hasRouteStepScreenshotImageId;
@property (retain, nonatomic) NSString *routeStepScreenshotImageId;

+ (char)isValid:(id)a0;

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
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
