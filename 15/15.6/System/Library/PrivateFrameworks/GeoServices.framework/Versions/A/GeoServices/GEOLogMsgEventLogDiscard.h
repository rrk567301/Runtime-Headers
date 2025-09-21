@class PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventLogDiscard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_certificates;
    NSData *_signature;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _trigger;
    struct { unsigned char has_trigger : 1; unsigned char read_unknownFields : 1; unsigned char read_certificates : 1; unsigned char read_signature : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *certificates;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) char hasTrigger;
@property (nonatomic) int trigger;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)certificatesType;
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
- (int)StringAsTrigger:(id)a0;
- (void)addCertificates:(id)a0;
- (id)certificatesAtIndex:(unsigned long long)a0;
- (unsigned long long)certificatesCount;
- (void)clearCertificates;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)triggerAsString:(int)a0;

@end
