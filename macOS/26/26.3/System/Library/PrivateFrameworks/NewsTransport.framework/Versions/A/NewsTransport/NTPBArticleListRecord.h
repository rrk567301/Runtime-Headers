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

- (id)dictionaryRepresentation;
- (id)articleIDsAtIndex:(unsigned long long)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArticleIDs:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)articleIDsCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearArticleIDs;

@end
