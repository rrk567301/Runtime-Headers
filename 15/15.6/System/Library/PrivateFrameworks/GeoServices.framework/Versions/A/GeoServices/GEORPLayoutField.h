@class NSString, PBDataReader, GEORPFeedbackLayoutFieldName;

@interface GEORPLayoutField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_displayText;
    GEORPFeedbackLayoutFieldName *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _ordinal;
    int _type;
    char _enabled;
    struct { unsigned char has_ordinal : 1; unsigned char has_type : 1; unsigned char has_enabled : 1; unsigned char read_displayText : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) GEORPFeedbackLayoutFieldName *name;
@property (readonly, nonatomic) char hasDisplayText;
@property (retain, nonatomic) NSString *displayText;
@property (nonatomic) char hasEnabled;
@property (nonatomic) char enabled;
@property (nonatomic) char hasOrdinal;
@property (nonatomic) unsigned int ordinal;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
