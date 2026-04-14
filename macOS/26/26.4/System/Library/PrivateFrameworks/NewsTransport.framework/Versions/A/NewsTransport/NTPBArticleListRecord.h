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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearArticleIDs;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addArticleIDs:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)articleIDsAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)articleIDsCount;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
