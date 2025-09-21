@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char state : 1; unsigned char status : 1; unsigned char isRetrying : 1; unsigned char isUsingSystemPairing : 1; } _has;
}

@property (readonly, nonatomic) char hasPairingData;
@property (retain, nonatomic) NSData *pairingData;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasIsRetrying;
@property (nonatomic) char isRetrying;
@property (nonatomic) char hasIsUsingSystemPairing;
@property (nonatomic) char isUsingSystemPairing;
@property (nonatomic) char hasState;
@property (nonatomic) int state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
