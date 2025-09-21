@class GEORPIncidentAnnotationDetails, GEORPIncidentUserPath, GEORPNewIncidentDetails, GEORPSiriContext, PBDataReader;

@interface GEORPIncidentFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPIncidentAnnotationDetails *_incidentAnnotationDetails;
    GEORPNewIncidentDetails *_newIncidentDetails;
    GEORPSiriContext *_siriContext;
    GEORPIncidentUserPath *_userPath;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_incidentAnnotationDetails : 1; unsigned char read_newIncidentDetails : 1; unsigned char read_siriContext : 1; unsigned char read_userPath : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasNewIncidentDetails;
@property (retain, nonatomic) GEORPNewIncidentDetails *newIncidentDetails;
@property (readonly, nonatomic) char hasIncidentAnnotationDetails;
@property (retain, nonatomic) GEORPIncidentAnnotationDetails *incidentAnnotationDetails;
@property (readonly, nonatomic) char hasSiriContext;
@property (retain, nonatomic) GEORPSiriContext *siriContext;
@property (readonly, nonatomic) char hasUserPath;
@property (retain, nonatomic) GEORPIncidentUserPath *userPath;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
