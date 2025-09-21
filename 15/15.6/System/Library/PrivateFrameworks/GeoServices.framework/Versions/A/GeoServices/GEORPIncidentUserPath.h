@interface GEORPIncidentUserPath : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _userPaths;
    int _transportType;
    char _navigationActive;
    char _reportedFromCarplay;
    struct { unsigned char has_transportType : 1; unsigned char has_navigationActive : 1; unsigned char has_reportedFromCarplay : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long userPathsCount;
@property (readonly, nonatomic) int *userPaths;
@property (nonatomic) char hasReportedFromCarplay;
@property (nonatomic) char reportedFromCarplay;
@property (nonatomic) char hasNavigationActive;
@property (nonatomic) char navigationActive;
@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTransportType:(id)a0;
- (int)StringAsUserPaths:(id)a0;
- (void)addUserPath:(int)a0;
- (void)clearUserPaths;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setUserPaths:(int *)a0 count:(unsigned long long)a1;
- (id)transportTypeAsString:(int)a0;
- (int)userPathAtIndex:(unsigned long long)a0;
- (id)userPathsAsString:(int)a0;

@end
