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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)clearTemplateEntrys;
- (void)addTemplateEntry:(id)a0;
- (unsigned long long)templateEntrysCount;
- (id)templateEntryAtIndex:(unsigned long long)a0;

@end
