@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgEventShowcaseSuppression : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_adamId;
    unsigned long long _businessId;
    NSString *_showcaseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _localSearchProviderID;
    int _suppressionReason;
    struct { unsigned char has_businessId : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_suppressionReason : 1; unsigned char read_unknownFields : 1; unsigned char read_adamId : 1; unsigned char read_showcaseId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasBusinessId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (readonly, nonatomic) char hasShowcaseId;
@property (retain, nonatomic) NSString *showcaseId;
@property (nonatomic) char hasSuppressionReason;
@property (nonatomic) int suppressionReason;
@property (readonly, nonatomic) char hasAdamId;
@property (retain, nonatomic) NSString *adamId;
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
- (int)StringAsSuppressionReason:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)suppressionReasonAsString:(int)a0;

@end
