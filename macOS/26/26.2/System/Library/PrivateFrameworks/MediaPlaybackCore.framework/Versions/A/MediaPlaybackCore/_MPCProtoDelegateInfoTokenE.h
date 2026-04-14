@class NSData, NSString;

@interface _MPCProtoDelegateInfoTokenE : PBCodable <NSCopying> {
    double _expirationDate;
    unsigned long long _sessionID;
    NSData *_playerDelegateInfoData;
    NSString *_storefront;
    struct { unsigned char expirationDate : 1; unsigned char sessionID : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
