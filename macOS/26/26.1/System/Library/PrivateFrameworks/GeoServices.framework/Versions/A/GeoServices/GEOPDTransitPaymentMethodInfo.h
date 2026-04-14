@class PBUnknownFields, NSMutableArray, PBDataReader;

@interface GEOPDTransitPaymentMethodInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _cachingRadiusMeters;
    NSMutableArray *_paymentMethodSuggestions;
    NSMutableArray *_paymentMethods;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_cachingRadiusMeters : 1; unsigned char read_unknownFields : 1; unsigned char read_paymentMethodSuggestions : 1; unsigned char read_paymentMethods : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
