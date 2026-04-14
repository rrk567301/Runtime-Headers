@class NSData;

@interface ICPBDGSPlayerInfoContextToken : PBCodable <NSCopying> {
    unsigned long long _sessionID;
    NSData *_token;
    struct { unsigned char sessionID : 1; } _has;
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
