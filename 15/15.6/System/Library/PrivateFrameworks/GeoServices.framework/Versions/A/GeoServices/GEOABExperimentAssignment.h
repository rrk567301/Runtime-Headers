@class PBDataReader, NSString, GEOABDebugPanelExperimentBranch, PBUnknownFields;

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    NSString *_offlineAbJson;
    NSString *_querySubstring;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeRequestType;
    int _serviceType;
    struct { unsigned char has_placeRequestType : 1; unsigned char has_serviceType : 1; unsigned char read_unknownFields : 1; unsigned char read_debugExperimentBranch : 1; unsigned char read_offlineAbJson : 1; unsigned char read_querySubstring : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic) char hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (readonly, nonatomic) char hasQuerySubstring;
@property (retain, nonatomic) NSString *querySubstring;
@property (readonly, nonatomic) char hasDebugExperimentBranch;
@property (retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (readonly, nonatomic) char hasOfflineAbJson;
@property (retain, nonatomic) NSString *offlineAbJson;
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
- (int)StringAsPlaceRequestType:(id)a0;
- (int)StringAsServiceType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)placeRequestTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)serviceTypeAsString:(int)a0;

@end
