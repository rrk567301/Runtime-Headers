@class NSString, NSData, NSMutableArray;

@interface NSPPrivacyProxyTokenInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSData *tokenKeyID;
@property (retain, nonatomic) NSMutableArray *unactivatedTokenLists;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (retain, nonatomic) NSMutableArray *tokenRequestLists;

+ (Class)tokenRequestListType;
+ (Class)unactivatedTokenListType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTokenRequestList:(id)a0;
- (void)addUnactivatedTokenList:(id)a0;
- (void)clearTokenRequestLists;
- (void)clearUnactivatedTokenLists;
- (id)tokenRequestListAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenRequestListsCount;
- (id)unactivatedTokenListAtIndex:(unsigned long long)a0;
- (unsigned long long)unactivatedTokenListsCount;

@end
