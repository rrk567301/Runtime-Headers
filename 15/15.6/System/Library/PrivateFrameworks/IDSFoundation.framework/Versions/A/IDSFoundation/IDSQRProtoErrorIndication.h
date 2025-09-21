@class NSString;

@interface IDSQRProtoErrorIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; unsigned char channelId : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) char hasChannelId;
@property (nonatomic) unsigned int channelId;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) char hasErrorReason;
@property (retain, nonatomic) NSString *errorReason;
@property (readonly, nonatomic) char hasClientAddress;
@property (retain, nonatomic) NSString *clientAddress;
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
