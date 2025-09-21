@class PBDataReader, GEORPProblemCorrections, GEORPProblemContext;

@interface GEORPProblem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _userPaths;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _problemType;
    unsigned int _protocolVersion;
    struct { unsigned char has_problemType : 1; unsigned char has_protocolVersion : 1; unsigned char read_userPaths : 1; unsigned char read_problemContext : 1; unsigned char read_problemCorrections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (readonly, nonatomic) unsigned long long userPathsCount;
@property (readonly, nonatomic) int *userPaths;
@property (nonatomic) char hasProblemType;
@property (nonatomic) int problemType;
@property (readonly, nonatomic) char hasProblemCorrections;
@property (retain, nonatomic) GEORPProblemCorrections *problemCorrections;
@property (readonly, nonatomic) char hasProblemContext;
@property (retain, nonatomic) GEORPProblemContext *problemContext;

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
- (int)StringAsProblemType:(id)a0;
- (int)StringAsUserPaths:(id)a0;
- (void)addUserPath:(int)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUserPaths;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)problemTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (void)setUserPaths:(int *)a0 count:(unsigned long long)a1;
- (int)userPathAtIndex:(unsigned long long)a0;
- (id)userPathsAsString:(int)a0;

@end
