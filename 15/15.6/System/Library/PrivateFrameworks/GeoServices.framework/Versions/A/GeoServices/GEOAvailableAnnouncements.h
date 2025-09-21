@class NSString, NSMutableArray, PBDataReader;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_announcements;
    NSString *_languageCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_announcements : 1; unsigned char read_languageCode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *announcements;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;

+ (Class)announcementType;
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
- (void)addAnnouncement:(id)a0;
- (id)announcementAtIndex:(unsigned long long)a0;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
