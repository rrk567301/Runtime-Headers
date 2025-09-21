@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDMerchantInformation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantAdditionalData;
    NSString *_merchantAddress;
    NSString *_merchantCanl;
    NSString *_merchantCity;
    NSString *_merchantCountryCode;
    NSString *_merchantDoingBusinessAsName;
    NSString *_merchantEnhancedName;
    NSString *_merchantId;
    NSString *_merchantRawAddress;
    NSString *_merchantRawCity;
    NSString *_merchantRawState;
    NSString *_merchantState;
    NSString *_merchantType;
    NSString *_merchantZip;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _merchantCleanConfidenceLevel;
    struct { unsigned char has_merchantCleanConfidenceLevel : 1; unsigned char read_unknownFields : 1; unsigned char read_merchantAdditionalData : 1; unsigned char read_merchantAddress : 1; unsigned char read_merchantCanl : 1; unsigned char read_merchantCity : 1; unsigned char read_merchantCountryCode : 1; unsigned char read_merchantDoingBusinessAsName : 1; unsigned char read_merchantEnhancedName : 1; unsigned char read_merchantId : 1; unsigned char read_merchantRawAddress : 1; unsigned char read_merchantRawCity : 1; unsigned char read_merchantRawState : 1; unsigned char read_merchantState : 1; unsigned char read_merchantType : 1; unsigned char read_merchantZip : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasMerchantId;
@property (retain, nonatomic) NSString *merchantId;
@property (readonly, nonatomic) char hasMerchantDoingBusinessAsName;
@property (retain, nonatomic) NSString *merchantDoingBusinessAsName;
@property (readonly, nonatomic) char hasMerchantEnhancedName;
@property (retain, nonatomic) NSString *merchantEnhancedName;
@property (readonly, nonatomic) char hasMerchantCity;
@property (retain, nonatomic) NSString *merchantCity;
@property (readonly, nonatomic) char hasMerchantRawCity;
@property (retain, nonatomic) NSString *merchantRawCity;
@property (readonly, nonatomic) char hasMerchantState;
@property (retain, nonatomic) NSString *merchantState;
@property (readonly, nonatomic) char hasMerchantRawState;
@property (retain, nonatomic) NSString *merchantRawState;
@property (readonly, nonatomic) char hasMerchantZip;
@property (retain, nonatomic) NSString *merchantZip;
@property (readonly, nonatomic) char hasMerchantAddress;
@property (retain, nonatomic) NSString *merchantAddress;
@property (readonly, nonatomic) char hasMerchantRawAddress;
@property (retain, nonatomic) NSString *merchantRawAddress;
@property (readonly, nonatomic) char hasMerchantCountryCode;
@property (retain, nonatomic) NSString *merchantCountryCode;
@property (readonly, nonatomic) char hasMerchantType;
@property (retain, nonatomic) NSString *merchantType;
@property (nonatomic) char hasMerchantCleanConfidenceLevel;
@property (nonatomic) int merchantCleanConfidenceLevel;
@property (readonly, nonatomic) char hasMerchantAdditionalData;
@property (retain, nonatomic) NSString *merchantAdditionalData;
@property (readonly, nonatomic) char hasMerchantCanl;
@property (retain, nonatomic) NSString *merchantCanl;
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
