@class NSString, GEOLocation, GEOPDMapsIdentifier, PBDataReader;

@interface GEORPMerchantLookupContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_correlationId;
    NSString *_merchantAdamId;
    NSString *_merchantFormattedAddress;
    GEOPDMapsIdentifier *_merchantId;
    NSString *_merchantIndustryCategory;
    long long _merchantIndustryCode;
    NSString *_merchantName;
    NSString *_merchantRawName;
    NSString *_merchantUrl;
    GEOLocation *_transactionLocation;
    double _transactionTime;
    NSString *_transactionType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _requestTransactionType;
    char _isAppleCard;
    struct { unsigned char has_merchantIndustryCode : 1; unsigned char has_transactionTime : 1; unsigned char has_requestTransactionType : 1; unsigned char has_isAppleCard : 1; unsigned char read_correlationId : 1; unsigned char read_merchantAdamId : 1; unsigned char read_merchantFormattedAddress : 1; unsigned char read_merchantId : 1; unsigned char read_merchantIndustryCategory : 1; unsigned char read_merchantName : 1; unsigned char read_merchantRawName : 1; unsigned char read_merchantUrl : 1; unsigned char read_transactionLocation : 1; unsigned char read_transactionType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasMerchantIndustryCode;
@property (nonatomic) long long merchantIndustryCode;
@property (readonly, nonatomic) char hasMerchantId;
@property (retain, nonatomic) GEOPDMapsIdentifier *merchantId;
@property (readonly, nonatomic) char hasMerchantName;
@property (retain, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) char hasMerchantRawName;
@property (retain, nonatomic) NSString *merchantRawName;
@property (readonly, nonatomic) char hasMerchantIndustryCategory;
@property (retain, nonatomic) NSString *merchantIndustryCategory;
@property (readonly, nonatomic) char hasMerchantUrl;
@property (retain, nonatomic) NSString *merchantUrl;
@property (readonly, nonatomic) char hasMerchantFormattedAddress;
@property (retain, nonatomic) NSString *merchantFormattedAddress;
@property (readonly, nonatomic) char hasMerchantAdamId;
@property (retain, nonatomic) NSString *merchantAdamId;
@property (nonatomic) char hasTransactionTime;
@property (nonatomic) double transactionTime;
@property (readonly, nonatomic) char hasTransactionType;
@property (retain, nonatomic) NSString *transactionType;
@property (readonly, nonatomic) char hasTransactionLocation;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (readonly, nonatomic) char hasCorrelationId;
@property (retain, nonatomic) NSString *correlationId;
@property (nonatomic) char hasIsAppleCard;
@property (nonatomic) char isAppleCard;
@property (nonatomic) char hasRequestTransactionType;
@property (nonatomic) int requestTransactionType;

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
- (int)StringAsRequestTransactionType:(id)a0;
- (id)requestTransactionTypeAsString:(int)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
