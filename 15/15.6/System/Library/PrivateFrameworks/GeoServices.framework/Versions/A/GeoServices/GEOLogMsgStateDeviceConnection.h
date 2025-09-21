@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _cellularDataState;
    int _deviceNetworkConnectivity;
    struct { unsigned char has_cellularDataState : 1; unsigned char has_deviceNetworkConnectivity : 1; unsigned char read_unknownFields : 1; unsigned char read_deviceCarrierName : 1; unsigned char read_deviceCountryCode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasDeviceNetworkConnectivity;
@property (nonatomic) int deviceNetworkConnectivity;
@property (readonly, nonatomic) char hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (readonly, nonatomic) char hasDeviceCarrierName;
@property (retain, nonatomic) NSString *deviceCarrierName;
@property (nonatomic) char hasCellularDataState;
@property (nonatomic) int cellularDataState;
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
- (int)StringAsDeviceNetworkConnectivity:(id)a0;
- (int)StringAsCellularDataState:(id)a0;
- (id)cellularDataStateAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)deviceNetworkConnectivityAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
