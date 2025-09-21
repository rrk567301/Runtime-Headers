@class AWDWiFiNWActivityAssoc, NSMutableArray, AWDWiFiNWActivityStateBin;

@interface AWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying> {
    struct { unsigned char consecutivedps : 1; unsigned char dps : 1; unsigned char role : 1; } _has;
}

@property (nonatomic) char hasRole;
@property (nonatomic) int role;
@property (retain, nonatomic) NSMutableArray *packets;
@property (retain, nonatomic) NSMutableArray *bytes;
@property (retain, nonatomic) NSMutableArray *peers;
@property (retain, nonatomic) NSMutableArray *npeers;
@property (nonatomic) char hasDps;
@property (nonatomic) unsigned int dps;
@property (nonatomic) char hasConsecutivedps;
@property (nonatomic) unsigned int consecutivedps;
@property (readonly, nonatomic) char hasAssoc;
@property (retain, nonatomic) AWDWiFiNWActivityAssoc *assoc;
@property (readonly, nonatomic) char hasAwdlMode;
@property (retain, nonatomic) AWDWiFiNWActivityStateBin *awdlMode;

+ (Class)peerType;
+ (Class)packetsType;
+ (Class)bytesType;
+ (Class)npeersType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (id)packetsAtIndex:(unsigned long long)a0;
- (void)addPackets:(id)a0;
- (void)clearPackets;
- (unsigned long long)packetsCount;
- (void)addBytes:(id)a0;
- (void)addNpeers:(id)a0;
- (void)addPeer:(id)a0;
- (id)bytesAtIndex:(unsigned long long)a0;
- (unsigned long long)bytesCount;
- (void)clearBytes;
- (void)clearNpeers;
- (void)clearPeers;
- (id)npeersAtIndex:(unsigned long long)a0;
- (unsigned long long)npeersCount;
- (id)peerAtIndex:(unsigned long long)a0;
- (unsigned long long)peersCount;

@end
