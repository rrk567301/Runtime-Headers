@class NSString, PBDataReader, PBUnknownFields;

@interface GEORouteTrafficDetail : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_spokenRouteName;
    NSString *_unabbreviatedRouteName;
    NSString *_writtenRouteName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _routeTrafficCondition;
    struct { unsigned char has_routeTrafficCondition : 1; unsigned char read_unknownFields : 1; unsigned char read_spokenRouteName : 1; unsigned char read_unabbreviatedRouteName : 1; unsigned char read_writtenRouteName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasRouteTrafficCondition;
@property (nonatomic) int routeTrafficCondition;
@property (readonly, nonatomic) char hasWrittenRouteName;
@property (retain, nonatomic) NSString *writtenRouteName;
@property (readonly, nonatomic) char hasSpokenRouteName;
@property (retain, nonatomic) NSString *spokenRouteName;
@property (readonly, nonatomic) char hasUnabbreviatedRouteName;
@property (retain, nonatomic) NSString *unabbreviatedRouteName;
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
- (int)StringAsRouteTrafficCondition:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)routeTrafficConditionAsString:(int)a0;

@end
