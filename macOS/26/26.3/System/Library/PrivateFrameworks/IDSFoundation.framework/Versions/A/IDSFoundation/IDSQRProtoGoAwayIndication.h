@class NSString, NSData;

@interface IDSQRProtoGoAwayIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (nonatomic) unsigned int reasonCode;
@property (readonly, nonatomic) BOOL hasReasonString;
@property (retain, nonatomic) NSString *reasonString;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (retain, nonatomic) NSData *serverBlob;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
