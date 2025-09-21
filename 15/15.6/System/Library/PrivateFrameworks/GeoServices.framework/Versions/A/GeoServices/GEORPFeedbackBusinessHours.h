@class GEOPDHours, NSString, PBDataReader;

@interface GEORPFeedbackBusinessHours : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_comments;
    unsigned long long _end;
    unsigned long long _start;
    GEOPDHours *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _hoursType;
    struct { unsigned char has_end : 1; unsigned char has_start : 1; unsigned char has_hoursType : 1; unsigned char read_comments : 1; unsigned char read_weeklyHours : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasWeeklyHours;
@property (retain, nonatomic) GEOPDHours *weeklyHours;
@property (nonatomic) char hasStart;
@property (nonatomic) unsigned long long start;
@property (nonatomic) char hasEnd;
@property (nonatomic) unsigned long long end;
@property (readonly, nonatomic) char hasComments;
@property (retain, nonatomic) NSString *comments;
@property (nonatomic) char hasHoursType;
@property (nonatomic) int hoursType;

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
- (int)StringAsHoursType:(id)a0;
- (id)hoursTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
