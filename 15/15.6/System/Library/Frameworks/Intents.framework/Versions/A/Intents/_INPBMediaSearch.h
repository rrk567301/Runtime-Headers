@class NSArray, _INPBDateTimeRange, NSString, _INPBString;

@interface _INPBMediaSearch : PBCodable <_INPBMediaSearch, NSSecureCoding, NSCopying> {
    struct { unsigned char mediaType : 1; unsigned char reference : 1; unsigned char sortOrder : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *albumName;
@property (readonly, nonatomic) char hasAlbumName;
@property (retain, nonatomic) _INPBString *artistName;
@property (readonly, nonatomic) char hasArtistName;
@property (copy, nonatomic) NSArray *genreNames;
@property (readonly, nonatomic) unsigned long long genreNamesCount;
@property (retain, nonatomic) _INPBString *mediaIdentifier;
@property (readonly, nonatomic) char hasMediaIdentifier;
@property (retain, nonatomic) _INPBString *mediaName;
@property (readonly, nonatomic) char hasMediaName;
@property (nonatomic) int mediaType;
@property (nonatomic) char hasMediaType;
@property (copy, nonatomic) NSArray *moodNames;
@property (readonly, nonatomic) unsigned long long moodNamesCount;
@property (nonatomic) int reference;
@property (nonatomic) char hasReference;
@property (retain, nonatomic) _INPBDateTimeRange *releaseDate;
@property (readonly, nonatomic) char hasReleaseDate;
@property (nonatomic) int sortOrder;
@property (nonatomic) char hasSortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)genreNamesType;
+ (Class)moodNamesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMediaType:(id)a0;
- (int)StringAsReference:(id)a0;
- (void)clearGenreNames;
- (int)StringAsSortOrder:(id)a0;
- (void)addGenreNames:(id)a0;
- (void)addMoodNames:(id)a0;
- (void)clearMoodNames;
- (id)genreNamesAtIndex:(unsigned long long)a0;
- (id)mediaTypeAsString:(int)a0;
- (id)moodNamesAtIndex:(unsigned long long)a0;
- (id)referenceAsString:(int)a0;
- (id)sortOrderAsString:(int)a0;

@end
