@interface CLPCdmaCellNeighbor : PBCodable <NSCopying> {
    struct { unsigned char channel : 1; unsigned char ecn0 : 1; unsigned char pilotPhase : 1; unsigned char pnoffset : 1; unsigned char rscp : 1; } _has;
}

@property (nonatomic) char hasPnoffset;
@property (nonatomic) int pnoffset;
@property (nonatomic) char hasPilotPhase;
@property (nonatomic) int pilotPhase;
@property (nonatomic) char hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) char hasRscp;
@property (nonatomic) int rscp;
@property (nonatomic) char hasChannel;
@property (nonatomic) int channel;

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
