@interface AWDControlFrames : PBCodable <NSCopying> {
    struct { unsigned char ack : 1; unsigned char blockAck : 1; unsigned char blockAckRequest : 1; unsigned char cFend : 1; unsigned char cFendCFack : 1; unsigned char cts : 1; unsigned char psPoll : 1; unsigned char rts : 1; } _has;
}

@property (nonatomic) char hasBlockAckRequest;
@property (nonatomic) unsigned long long blockAckRequest;
@property (nonatomic) char hasBlockAck;
@property (nonatomic) unsigned long long blockAck;
@property (nonatomic) char hasPsPoll;
@property (nonatomic) unsigned long long psPoll;
@property (nonatomic) char hasRts;
@property (nonatomic) unsigned long long rts;
@property (nonatomic) char hasCts;
@property (nonatomic) unsigned long long cts;
@property (nonatomic) char hasAck;
@property (nonatomic) unsigned long long ack;
@property (nonatomic) char hasCFend;
@property (nonatomic) unsigned long long cFend;
@property (nonatomic) char hasCFendCFack;
@property (nonatomic) unsigned long long cFendCFack;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
