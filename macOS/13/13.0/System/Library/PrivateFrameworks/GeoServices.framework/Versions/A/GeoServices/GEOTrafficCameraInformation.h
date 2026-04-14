@class NSString;

@interface GEOTrafficCameraInformation : PBCodable <NSCopying> {
    NSString *_cameraIdentifier;
    int _cameraType;
    struct { unsigned char has_cameraType : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCameraIdentifier;
@property (retain, nonatomic) NSString *cameraIdentifier;
@property (nonatomic) BOOL hasCameraType;
@property (nonatomic) int cameraType;

+ (BOOL)isValid:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)cameraTypeAsString:(int)a0;
- (int)StringAsCameraType:(id)a0;

@end
