@class NSData, NSString;

@interface _MPCProtoDelegateInfoTokenE : PBCodable <NSCopying> {
    double _expirationDate;
    unsigned long long _sessionID;
    NSData *_playerDelegateInfoData;
    NSString *_storefront;
    struct { unsigned char expirationDate : 1; unsigned char sessionID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
