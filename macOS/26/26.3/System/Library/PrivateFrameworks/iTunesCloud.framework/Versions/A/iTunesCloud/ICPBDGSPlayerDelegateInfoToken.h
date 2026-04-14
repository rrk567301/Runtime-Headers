@class NSString, NSData;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {
    double _expirationTimeInterval;
    unsigned long long _sessionID;
    NSString *_storefrontIdentifier;
    NSData *_token;
    struct { unsigned char expirationTimeInterval : 1; unsigned char sessionID : 1; } _has;
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
