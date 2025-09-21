@class NSString, NSMutableArray, PBDataReader;

@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_requests;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_deviceCountryCode : 1; unsigned char read_deviceSku : 1; unsigned char read_requests : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *requests;
@property (readonly, nonatomic) char hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (readonly, nonatomic) char hasDeviceSku;
@property (retain, nonatomic) NSString *deviceSku;

+ (Class)requestType;
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
- (unsigned int)requestTypeCode;
- (void)addRequest:(id)a0;
- (void)clearRequests;
- (Class)responseClass;
- (id)requestAtIndex:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (unsigned long long)requestsCount;

@end
