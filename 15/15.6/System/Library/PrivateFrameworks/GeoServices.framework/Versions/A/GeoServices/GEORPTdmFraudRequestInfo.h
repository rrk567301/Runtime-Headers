@class PBUnknownFields, NSString, PBDataReader, GEORPTdmUserMapsStatus;

@interface GEORPTdmFraudRequestInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_anonymousId;
    NSString *_fsrData;
    NSString *_keyId;
    NSString *_tdmNamespace;
    GEORPTdmUserMapsStatus *_tdmUserMapsStatus;
    NSString *_transactionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_anonymousId : 1; unsigned char read_fsrData : 1; unsigned char read_keyId : 1; unsigned char read_tdmNamespace : 1; unsigned char read_tdmUserMapsStatus : 1; unsigned char read_transactionId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasTdmNamespace;
@property (retain, nonatomic) NSString *tdmNamespace;
@property (readonly, nonatomic) char hasTransactionId;
@property (retain, nonatomic) NSString *transactionId;
@property (readonly, nonatomic) char hasAnonymousId;
@property (retain, nonatomic) NSString *anonymousId;
@property (readonly, nonatomic) char hasFsrData;
@property (retain, nonatomic) NSString *fsrData;
@property (readonly, nonatomic) char hasKeyId;
@property (retain, nonatomic) NSString *keyId;
@property (readonly, nonatomic) char hasTdmUserMapsStatus;
@property (retain, nonatomic) GEORPTdmUserMapsStatus *tdmUserMapsStatus;
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
