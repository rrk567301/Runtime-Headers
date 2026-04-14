@class NSMutableArray;

@interface NSPPrivacyProxyTokenActivationResponse : PBCodable <NSCopying> {
    struct { unsigned char tokenExpiryTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTokenExpiryTimestamp;
@property (nonatomic) unsigned long long tokenExpiryTimestamp;
@property (retain, nonatomic) NSMutableArray *activatedTokenLists;
@property (retain, nonatomic) NSMutableArray *auxiliaryAuthArrays;

+ (Class)activatedTokenListType;
+ (Class)auxiliaryAuthArrayType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)activatedTokenListAtIndex:(unsigned long long)a0;
- (unsigned long long)activatedTokenListsCount;
- (void)addActivatedTokenList:(id)a0;
- (void)addAuxiliaryAuthArray:(id)a0;
- (id)auxiliaryAuthArrayAtIndex:(unsigned long long)a0;
- (unsigned long long)auxiliaryAuthArraysCount;
- (void)clearActivatedTokenLists;
- (void)clearAuxiliaryAuthArrays;

@end
