@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_launchUri;
    NSString *_referringWebsite;
    NSString *_sourceAppId;
    NSString *_sourceHandoffDevice;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _launchActionInternal;
    int _launchAction;
    char _isHandoff;
    struct { unsigned char has_launchActionInternal : 1; unsigned char has_launchAction : 1; unsigned char has_isHandoff : 1; unsigned char read_unknownFields : 1; unsigned char read_launchUri : 1; unsigned char read_referringWebsite : 1; unsigned char read_sourceAppId : 1; unsigned char read_sourceHandoffDevice : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasSourceAppId;
@property (retain, nonatomic) NSString *sourceAppId;
@property (readonly, nonatomic) char hasLaunchUri;
@property (retain, nonatomic) NSString *launchUri;
@property (readonly, nonatomic) char hasReferringWebsite;
@property (retain, nonatomic) NSString *referringWebsite;
@property (nonatomic) char hasIsHandoff;
@property (nonatomic) char isHandoff;
@property (readonly, nonatomic) char hasSourceHandoffDevice;
@property (retain, nonatomic) NSString *sourceHandoffDevice;
@property (nonatomic) char hasLaunchAction;
@property (nonatomic) int launchAction;
@property (nonatomic) char hasLaunchActionInternal;
@property (nonatomic) int launchActionInternal;
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
- (int)StringAsLaunchAction:(id)a0;
- (int)StringAsLaunchActionInternal:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)launchActionAsString:(int)a0;
- (id)launchActionInternalAsString:(int)a0;
- (void)readAll:(char)a0;

@end
