@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {
    NSData *_pairingData;
    int _state;
    int _status;
    BOOL _isRetrying;
    BOOL _isUsingSystemPairing;
    struct { unsigned char state : 1; unsigned char status : 1; unsigned char isRetrying : 1; unsigned char isUsingSystemPairing : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
