@class NSMutableArray;

@interface NSPPrivacyProxyTokenActivationResponse : PBCodable <NSCopying> {
    unsigned long long _tokenExpiryTimestamp;
    NSMutableArray *_activatedTokenLists;
    struct { unsigned char tokenExpiryTimestamp : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
