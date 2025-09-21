@class NSString, NSData;

@interface DRSProtoRapidPayloadReply : PBCodable <NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (nonatomic) char hasSuccess;
@property (nonatomic) char success;
@property (readonly, nonatomic) char hasFailureReason;
@property (retain, nonatomic) NSString *failureReason;
@property (readonly, nonatomic) char hasReplyPayload;
@property (retain, nonatomic) NSData *replyPayload;

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
