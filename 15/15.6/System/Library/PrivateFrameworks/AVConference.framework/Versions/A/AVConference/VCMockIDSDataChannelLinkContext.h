@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    char _forceNetworkCellular;
    unsigned short _localLinkFlags;
    unsigned short _estimatedPerPacketConstantOverhead;
    char _linkID;
}

@property (nonatomic) char idsUPlusOneMode;
@property unsigned char networkType;
@property unsigned char remoteNetworkType;

- (long long)connectionType;
- (unsigned int)RATType;
- (unsigned short)estimatedPerPacketConstantOverhead;
- (char)isVirtualRelayLink;
- (char)linkID;
- (unsigned short)localLinkFlags;
- (unsigned int)remoteRATType;
- (id)initWithSourcePort:(short)a0;

@end
