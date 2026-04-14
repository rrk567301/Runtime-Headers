@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
    BOOL _isTestingOneToOne;
}

- (id)init;
- (long long)connectionType;
- (unsigned int)RATType;
- (unsigned int)remoteRATType;
- (BOOL)isVirtualRelayLink;

@end
