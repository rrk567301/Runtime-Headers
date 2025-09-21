@class PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOStepGroup : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _stepIds;
    GEOFormattedString *_groupInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_stepIds : 1; unsigned char read_groupInstruction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasGroupInstruction;
@property (retain, nonatomic) GEOFormattedString *groupInstruction;
@property (readonly, nonatomic) unsigned long long stepIdsCount;
@property (readonly, nonatomic) unsigned int *stepIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (void)addStepId:(unsigned int)a0;
- (void)clearStepIds;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setStepIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)stepIdAtIndex:(unsigned long long)a0;

@end
