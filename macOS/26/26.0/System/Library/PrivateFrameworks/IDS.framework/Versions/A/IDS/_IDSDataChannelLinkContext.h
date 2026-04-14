@class NSUUID, NSString, NSData, NSDictionary, _IDSDataChannelLinkConnections, NSArray;

@interface _IDSDataChannelLinkContext : NSObject {
    NSUUID *_uniqueID;
    NSString *_linkEngineUniqueID;
    char _linkID;
    unsigned char _networkType;
    long long _connectionType;
    unsigned int _RATType;
    unsigned short _maxMTU;
    unsigned short _pathMTU;
    unsigned char _remoteNetworkType;
    long long _remoteConnectionType;
    unsigned int _remoteRATType;
    unsigned int _maxBitrate;
    NSUUID *_linkUUID;
    NSUUID *_QRSessionID;
    long long _relayServerProvider;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    BOOL _serverIsDegraded;
    unsigned short _localLinkFlags;
    unsigned short _remoteLinkFlags;
    unsigned int _localDataSoMask;
    unsigned int _remoteDataSoMask;
    BOOL _isVirtualRelayLink;
    BOOL _isPartialTLEUPlusOneEnabled;
    BOOL _isQualityMetadataEnabled;
    NSString *_localInterfaceName;
    NSString *_relayProtocolStackDescription;
    _IDSDataChannelLinkConnections *_connections;
    NSDictionary *_qrExperiments;
    NSArray *_featureFlags;
    unsigned short _channelNumber;
    NSData *_hbhEncryptionkey;
    NSData *_hbhDecryptionkey;
    unsigned long long _parentUniquePID;
    char _delegatedLinkID;
    unsigned short _localRelayLinkID;
    unsigned short _remoteRelayLinkID;
    BOOL _directConnectionIsReady;
    unsigned short _estimatedPerPacketConstantOverhead;
}

- (id)description;
- (void).cxx_destruct;

@end
