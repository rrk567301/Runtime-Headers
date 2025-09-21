@class NSData, NSMutableArray, NSString;

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying> {
    NSData *_playerAnisetteMID;
    NSData *_playerDeviceGUID;
    NSMutableArray *_playerInfoContextTokens;
    NSString *_playerUserAgent;
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
