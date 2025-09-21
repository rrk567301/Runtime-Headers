@class PBDataReader, NSString, NSData, PBUnknownFields;

@interface GEORPAppAttestInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_anonymousUserId;
    NSData *_assertion;
    NSData *_attestation;
    NSString *_keyId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_anonymousUserId : 1; unsigned char read_assertion : 1; unsigned char read_attestation : 1; unsigned char read_keyId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasAnonymousUserId;
@property (retain, nonatomic) NSString *anonymousUserId;
@property (readonly, nonatomic) char hasAttestation;
@property (retain, nonatomic) NSData *attestation;
@property (readonly, nonatomic) char hasAssertion;
@property (retain, nonatomic) NSData *assertion;
@property (readonly, nonatomic) char hasKeyId;
@property (retain, nonatomic) NSString *keyId;
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
