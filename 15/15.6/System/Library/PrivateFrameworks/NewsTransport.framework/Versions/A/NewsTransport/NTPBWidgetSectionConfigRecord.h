@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBWidgetSectionConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasConfiguration2;
@property (retain, nonatomic) NSString *configuration2;
@property (retain, nonatomic) NSMutableArray *articleListIDs2s;
@property (retain, nonatomic) NSMutableArray *articleIDs2s;
@property (readonly, nonatomic) char hasSingleTagConfiguration;
@property (retain, nonatomic) NSString *singleTagConfiguration;

+ (Class)articleIDs2Type;
+ (Class)articleListIDs2Type;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArticleIDs2:(id)a0;
- (void)addArticleListIDs2:(id)a0;
- (id)articleIDs2AtIndex:(unsigned long long)a0;
- (unsigned long long)articleIDs2sCount;
- (id)articleListIDs2AtIndex:(unsigned long long)a0;
- (unsigned long long)articleListIDs2sCount;
- (void)clearArticleIDs2s;
- (void)clearArticleListIDs2s;

@end
