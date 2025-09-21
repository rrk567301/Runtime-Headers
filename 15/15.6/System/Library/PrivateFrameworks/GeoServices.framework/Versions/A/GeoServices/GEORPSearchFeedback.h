@class PBDataReader, GEORPSearchFeedbackCorrections, GEORPSearchFeedbackContext, PBUnknownFields;

@interface GEORPSearchFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPSearchFeedbackContext *_context;
    GEORPSearchFeedbackCorrections *_corrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_context : 1; unsigned char read_corrections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) GEORPSearchFeedbackContext *context;
@property (readonly, nonatomic) char hasCorrections;
@property (retain, nonatomic) GEORPSearchFeedbackCorrections *corrections;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
