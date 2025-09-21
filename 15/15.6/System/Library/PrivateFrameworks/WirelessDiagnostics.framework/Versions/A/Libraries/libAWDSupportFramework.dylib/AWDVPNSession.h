@class NSString;

@interface AWDVPNSession : PBCodable <NSCopying> {
    struct { unsigned char inBytes : 1; unsigned char outBytes : 1; unsigned char timestamp : 1; unsigned char disconnectReason : 1; unsigned char duration : 1; unsigned char ipv4Installed : 1; unsigned char ipv6Installed : 1; unsigned char reassertCount : 1; unsigned char systemAuthenMethod : 1; unsigned char triggerTrafficClass : 1; unsigned char triggerType : 1; unsigned char userAuthenMethod : 1; unsigned char appVpnUsed : 1; unsigned char connectFailed : 1; unsigned char proxyInstalled : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasProtocol;
@property (retain, nonatomic) NSString *protocol;
@property (nonatomic) char hasTriggerType;
@property (nonatomic) unsigned int triggerType;
@property (nonatomic) char hasTriggerTrafficClass;
@property (nonatomic) unsigned int triggerTrafficClass;
@property (nonatomic) char hasIpv4Installed;
@property (nonatomic) unsigned int ipv4Installed;
@property (nonatomic) char hasIpv6Installed;
@property (nonatomic) unsigned int ipv6Installed;
@property (nonatomic) char hasProxyInstalled;
@property (nonatomic) char proxyInstalled;
@property (nonatomic) char hasAppVpnUsed;
@property (nonatomic) char appVpnUsed;
@property (nonatomic) char hasSystemAuthenMethod;
@property (nonatomic) unsigned int systemAuthenMethod;
@property (nonatomic) char hasUserAuthenMethod;
@property (nonatomic) unsigned int userAuthenMethod;
@property (nonatomic) char hasDisconnectReason;
@property (nonatomic) unsigned int disconnectReason;
@property (nonatomic) char hasConnectFailed;
@property (nonatomic) char connectFailed;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasReassertCount;
@property (nonatomic) unsigned int reassertCount;
@property (nonatomic) char hasInBytes;
@property (nonatomic) unsigned long long inBytes;
@property (nonatomic) char hasOutBytes;
@property (nonatomic) unsigned long long outBytes;

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

@end
