@class PBDataReader, GEOPDChargerInfo, NSString, GEOPDAvailabilityInfo, PBUnknownFields;

@interface GEOPDPlug : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAvailabilityInfo *_availabilityInfo;
    GEOPDChargerInfo *_chargerInfo;
    NSString *_connectorTypeDisplayText;
    NSString *_currentTypeDisplayText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _connectorType;
    unsigned int _powerWatts;
    struct { unsigned char has_connectorType : 1; unsigned char has_powerWatts : 1; unsigned char read_unknownFields : 1; unsigned char read_availabilityInfo : 1; unsigned char read_chargerInfo : 1; unsigned char read_connectorTypeDisplayText : 1; unsigned char read_currentTypeDisplayText : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
