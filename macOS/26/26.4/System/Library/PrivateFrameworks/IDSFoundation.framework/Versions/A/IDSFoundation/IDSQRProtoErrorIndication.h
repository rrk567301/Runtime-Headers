@class NSString;

@interface IDSQRProtoErrorIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; unsigned char channelId : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasChannelId;
@property (nonatomic) unsigned int channelId;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) BOOL hasErrorReason;
@property (retain, nonatomic) NSString *errorReason;
@property (readonly, nonatomic) BOOL hasClientAddress;
@property (retain, nonatomic) NSString *clientAddress;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
