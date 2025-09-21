@class PBDataReader, NSString, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDExpertContentValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_contentTexts;
    NSString *_expertPartnerUrl;
    GEOPDMapsIdentifier *_publisherId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _accoladeIndex;
    int _expertContentType;
    struct { unsigned char has_accoladeIndex : 1; unsigned char has_expertContentType : 1; unsigned char read_unknownFields : 1; unsigned char read_contentTexts : 1; unsigned char read_expertPartnerUrl : 1; unsigned char read_publisherId : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
