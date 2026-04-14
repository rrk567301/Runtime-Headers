@class PBDataReader, GEOPDFollowUpRequestMetadata, NSMutableArray, PBUnknownFields;

@interface GEOPDTemplatePlace : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDFollowUpRequestMetadata *_followUpRequestMetadata;
    NSMutableArray *_templateDatas;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numInlineItems;
    struct { unsigned char has_numInlineItems : 1; unsigned char read_unknownFields : 1; unsigned char read_followUpRequestMetadata : 1; unsigned char read_templateDatas : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)templatedPlacesForPlaceData:(id)a0;

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
