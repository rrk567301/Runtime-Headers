@class NSData, NSString;

@interface _MPCProtoDelegateInfoTokenE : PBCodable <NSCopying> {
    double _expirationDate;
    unsigned long long _sessionID;
    NSData *_playerDelegateInfoData;
    NSString *_storefront;
    struct { unsigned char expirationDate : 1; unsigned char sessionID : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
