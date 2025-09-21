@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBArticleListRecord : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *articleIDs;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSString *metadata;

+ (Class)articleIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)articleIDsCount;
- (void)clearArticleIDs;
- (void)addArticleIDs:(id)a0;
- (id)articleIDsAtIndex:(unsigned long long)a0;

@end
