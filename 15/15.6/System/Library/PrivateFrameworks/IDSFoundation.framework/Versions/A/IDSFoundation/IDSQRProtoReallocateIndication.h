@class NSData, NSString;

@interface IDSQRProtoReallocateIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (retain, nonatomic) NSData *reallocateToken;
@property (retain, nonatomic) NSData *sessionId;
@property (retain, nonatomic) NSString *clientAddress;
@property (retain, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) char hasServerBlob;
@property (retain, nonatomic) NSData *serverBlob;
@property (nonatomic) char hasTxnId;
@property (nonatomic) unsigned long long txnId;

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
