@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryLayoutTemplate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_templateEntrys;
    NSString *_templateId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_templateEntrys : 1; unsigned char read_templateId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTemplateId;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSMutableArray *templateEntrys;

+ (BOOL)isValid:(id)a0;
+ (Class)templateEntryType;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)init;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)addTemplateEntry:(id)a0;
- (void)clearTemplateEntrys;
- (id)templateEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)templateEntrysCount;

@end
