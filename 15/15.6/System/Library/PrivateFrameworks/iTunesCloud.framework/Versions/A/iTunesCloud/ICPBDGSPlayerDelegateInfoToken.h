@class NSString, NSData;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {
    double _expirationTimeInterval;
    unsigned long long _sessionID;
    NSString *_storefrontIdentifier;
    NSData *_token;
    struct { unsigned char expirationTimeInterval : 1; unsigned char sessionID : 1; } _has;
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
