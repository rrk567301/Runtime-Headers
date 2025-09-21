@class NSData, NSString;

@interface _MPCProtoDelegateInfoTokenE : PBCodable <NSCopying> {
    double _expirationDate;
    unsigned long long _sessionID;
    NSData *_playerDelegateInfoData;
    NSString *_storefront;
    struct { unsigned char expirationDate : 1; unsigned char sessionID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
