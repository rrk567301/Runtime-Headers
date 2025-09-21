@class NSData, NSString;

@interface IDSQRProtoReallocateIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; unsigned char reason : 1; } _has;
}

@property (retain, nonatomic) NSData *reallocateToken;
@property (retain, nonatomic) NSData *sessionId;
@property (retain, nonatomic) NSString *clientAddress;
@property (retain, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (retain, nonatomic) NSData *serverBlob;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (readonly, nonatomic) BOOL hasServerIpAddressV4;
@property (retain, nonatomic) NSString *serverIpAddressV4;
@property (readonly, nonatomic) BOOL hasServerIpAddressV6;
@property (retain, nonatomic) NSString *serverIpAddressV6;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reasonAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsReason:(id)a0;
- (void).cxx_destruct;

@end
