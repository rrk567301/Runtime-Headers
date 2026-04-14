@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
}

@property (nonatomic) BOOL idsUPlusOneMode;

- (id)init;
- (long long)connectionType;
- (unsigned int)RATType;
- (BOOL)isVirtualRelayLink;
- (unsigned int)remoteRATType;

@end
