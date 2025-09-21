@class PBDataReader, NSString, GEOTimeToLeaveMapLaunch, PBUnknownFields;

@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_launchUri;
    NSString *_sourceAppId;
    GEOTimeToLeaveMapLaunch *_timeToLeave;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_launchUri : 1; unsigned char read_sourceAppId : 1; unsigned char read_timeToLeave : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasSourceAppId;
@property (retain, nonatomic) NSString *sourceAppId;
@property (readonly, nonatomic) char hasLaunchUri;
@property (retain, nonatomic) NSString *launchUri;
@property (readonly, nonatomic) char hasTimeToLeave;
@property (retain, nonatomic) GEOTimeToLeaveMapLaunch *timeToLeave;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
