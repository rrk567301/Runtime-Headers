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
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (retain, nonatomic) NSString *deviceSku;

+ (Class)requestType;
+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (Class)responseClass;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)addRequest:(id)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearRequests;
- (id)requestAtIndex:(unsigned long long)a0;
- (unsigned long long)requestsCount;

@end
