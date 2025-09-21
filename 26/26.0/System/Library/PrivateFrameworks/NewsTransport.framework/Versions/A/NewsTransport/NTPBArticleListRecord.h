@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBArticleListRecord : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *articleIDs;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSString *metadata;

+ (Class)articleIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)articleIDsCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearArticleIDs;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)articleIDsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addArticleIDs:(id)a0;

@end
