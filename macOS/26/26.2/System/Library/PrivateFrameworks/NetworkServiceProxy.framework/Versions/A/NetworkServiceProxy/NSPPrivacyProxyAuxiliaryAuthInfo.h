@class NSString, NSMutableArray;

@interface NSPPrivacyProxyAuxiliaryAuthInfo : PBCodable <NSCopying>

@property (nonatomic) int authType;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSMutableArray *contentLists;

+ (Class)contentListType;

- (id)authTypeAsString:(int)a0;
- (int)StringAsAuthType:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addContentList:(id)a0;
- (void)clearContentLists;
- (id)contentListAtIndex:(unsigned long long)a0;
- (unsigned long long)contentListsCount;

@end
