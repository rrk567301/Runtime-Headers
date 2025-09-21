@class NSString, PBUnknownFields;

@interface GEOLogMsgEventPlaceCacheLookup : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _businessId;
    NSString *_requestAppIdentifier;
    unsigned int _bytes;
    int _localSearchProviderID;
    int _lookupResult;
    struct { unsigned char has_businessId : 1; unsigned char has_bytes : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_lookupResult : 1; } _flags;
}

@property (readonly, nonatomic) char hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic) char hasBusinessId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) char hasBytes;
@property (nonatomic) unsigned int bytes;
@property (nonatomic) char hasLookupResult;
@property (nonatomic) int lookupResult;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsLookupResult:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)lookupResultAsString:(int)a0;
- (void)readAll:(char)a0;

@end
