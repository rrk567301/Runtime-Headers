@class PBUnknownFields;

@interface GEOClientNetworkTransactionMetrics : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _connectEnd;
    double _connectStart;
    double _domainLookupEnd;
    double _domainLookupStart;
    double _fetchStart;
    double _requestEnd;
    double _requestStart;
    double _responseEnd;
    double _responseStart;
    double _secureConnectEnd;
    double _secureConnectStart;
    int _multipathServiceType;
    int _protocolName;
    int _resourceFetchType;
    char _isMultipath;
    char _proxyConnection;
    char _reusedConnection;
    char _usedCellular;
    struct { unsigned char has_connectEnd : 1; unsigned char has_connectStart : 1; unsigned char has_domainLookupEnd : 1; unsigned char has_domainLookupStart : 1; unsigned char has_fetchStart : 1; unsigned char has_requestEnd : 1; unsigned char has_requestStart : 1; unsigned char has_responseEnd : 1; unsigned char has_responseStart : 1; unsigned char has_secureConnectEnd : 1; unsigned char has_secureConnectStart : 1; unsigned char has_multipathServiceType : 1; unsigned char has_protocolName : 1; unsigned char has_resourceFetchType : 1; unsigned char has_isMultipath : 1; unsigned char has_proxyConnection : 1; unsigned char has_reusedConnection : 1; unsigned char has_usedCellular : 1; } _flags;
}

@property (nonatomic) char hasFetchStart;
@property (nonatomic) double fetchStart;
@property (nonatomic) char hasDomainLookupStart;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) char hasDomainLookupEnd;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) char hasConnectStart;
@property (nonatomic) double connectStart;
@property (nonatomic) char hasSecureConnectStart;
@property (nonatomic) double secureConnectStart;
@property (nonatomic) char hasSecureConnectEnd;
@property (nonatomic) double secureConnectEnd;
@property (nonatomic) char hasConnectEnd;
@property (nonatomic) double connectEnd;
@property (nonatomic) char hasRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) char hasRequestEnd;
@property (nonatomic) double requestEnd;
@property (nonatomic) char hasResponseStart;
@property (nonatomic) double responseStart;
@property (nonatomic) char hasResponseEnd;
@property (nonatomic) double responseEnd;
@property (nonatomic) char hasProtocolName;
@property (nonatomic) int protocolName;
@property (nonatomic) char hasProxyConnection;
@property (nonatomic) char proxyConnection;
@property (nonatomic) char hasReusedConnection;
@property (nonatomic) char reusedConnection;
@property (nonatomic) char hasResourceFetchType;
@property (nonatomic) int resourceFetchType;
@property (nonatomic) char hasIsMultipath;
@property (nonatomic) char isMultipath;
@property (nonatomic) char hasMultipathServiceType;
@property (nonatomic) int multipathServiceType;
@property (nonatomic) char hasUsedCellular;
@property (nonatomic) char usedCellular;
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
- (int)StringAsMultipathServiceType:(id)a0;
- (int)StringAsProtocolName:(id)a0;
- (int)StringAsResourceFetchType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)multipathServiceTypeAsString:(int)a0;
- (id)protocolNameAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)resourceFetchTypeAsString:(int)a0;

@end
