@interface AWDMacCountersRx : PBCodable <NSCopying> {
    struct { unsigned char rxackucast : 1; unsigned char rxcfrmmcast : 1; unsigned char rxcfrmocast : 1; unsigned char rxcfrmucast : 1; unsigned char rxctsocast : 1; unsigned char rxctsucast : 1; unsigned char rxdfrmmcast : 1; unsigned char rxdfrmocast : 1; unsigned char rxdfrmucastmbss : 1; unsigned char rxmfrmmcast : 1; unsigned char rxmfrmocast : 1; unsigned char rxmfrmucastmbss : 1; unsigned char rxrtsocast : 1; unsigned char rxrtsucast : 1; } _has;
}

@property (nonatomic) char hasRxdfrmucastmbss;
@property (nonatomic) unsigned long long rxdfrmucastmbss;
@property (nonatomic) char hasRxmfrmucastmbss;
@property (nonatomic) unsigned long long rxmfrmucastmbss;
@property (nonatomic) char hasRxcfrmucast;
@property (nonatomic) unsigned long long rxcfrmucast;
@property (nonatomic) char hasRxrtsucast;
@property (nonatomic) unsigned long long rxrtsucast;
@property (nonatomic) char hasRxctsucast;
@property (nonatomic) unsigned long long rxctsucast;
@property (nonatomic) char hasRxackucast;
@property (nonatomic) unsigned long long rxackucast;
@property (nonatomic) char hasRxdfrmocast;
@property (nonatomic) unsigned long long rxdfrmocast;
@property (nonatomic) char hasRxmfrmocast;
@property (nonatomic) unsigned long long rxmfrmocast;
@property (nonatomic) char hasRxcfrmocast;
@property (nonatomic) unsigned long long rxcfrmocast;
@property (nonatomic) char hasRxrtsocast;
@property (nonatomic) unsigned long long rxrtsocast;
@property (nonatomic) char hasRxctsocast;
@property (nonatomic) unsigned long long rxctsocast;
@property (nonatomic) char hasRxdfrmmcast;
@property (nonatomic) unsigned long long rxdfrmmcast;
@property (nonatomic) char hasRxmfrmmcast;
@property (nonatomic) unsigned long long rxmfrmmcast;
@property (nonatomic) char hasRxcfrmmcast;
@property (nonatomic) unsigned long long rxcfrmmcast;

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
