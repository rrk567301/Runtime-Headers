@class NSMutableArray;

@interface NSPPrivacyProxyTokenActivationResponse : PBCodable <NSCopying> {
    struct { unsigned char tokenExpiryTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTokenExpiryTimestamp;
@property (nonatomic) unsigned long long tokenExpiryTimestamp;
@property (retain, nonatomic) NSMutableArray *activatedTokenLists;

+ (Class)activatedTokenListType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addActivatedTokenList:(id)a0;
- (unsigned long long)activatedTokenListsCount;
- (void)clearActivatedTokenLists;
- (id)activatedTokenListAtIndex:(unsigned long long)a0;

@end
