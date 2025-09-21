@interface AWDWiFiRangingRttData : PBCodable <NSCopying> {
    struct { unsigned char bitErrorRate : 1; unsigned char channel : 1; unsigned char coreId : 1; unsigned char flags : 1; unsigned char losPeakRatio : 1; unsigned char peerBitErrorRate : 1; unsigned char peerCoreId : 1; unsigned char peerLosPeakRatio : 1; unsigned char peerPhyError : 1; unsigned char peerSnr : 1; unsigned char phyError : 1; unsigned char rssi : 1; unsigned char rtt : 1; unsigned char snr : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) char hasFlags;
@property (nonatomic) unsigned int flags;
@property (nonatomic) char hasRtt;
@property (nonatomic) unsigned int rtt;
@property (nonatomic) char hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) char hasSnr;
@property (nonatomic) unsigned int snr;
@property (nonatomic) char hasCoreId;
@property (nonatomic) unsigned int coreId;
@property (nonatomic) char hasLosPeakRatio;
@property (nonatomic) unsigned int losPeakRatio;
@property (nonatomic) char hasBitErrorRate;
@property (nonatomic) unsigned int bitErrorRate;
@property (nonatomic) char hasPhyError;
@property (nonatomic) unsigned int phyError;
@property (nonatomic) char hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) char hasPeerSnr;
@property (nonatomic) unsigned int peerSnr;
@property (nonatomic) char hasPeerLosPeakRatio;
@property (nonatomic) unsigned int peerLosPeakRatio;
@property (nonatomic) char hasPeerCoreId;
@property (nonatomic) unsigned int peerCoreId;
@property (nonatomic) char hasPeerBitErrorRate;
@property (nonatomic) unsigned int peerBitErrorRate;
@property (nonatomic) char hasPeerPhyError;
@property (nonatomic) unsigned int peerPhyError;
@property (nonatomic) char hasChannel;
@property (nonatomic) unsigned int channel;

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
