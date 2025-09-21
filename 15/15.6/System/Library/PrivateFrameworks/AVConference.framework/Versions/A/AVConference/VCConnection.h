@class NSDictionary;

@interface VCConnection : NSObject {
    unsigned short _linkFlags;
    unsigned short _remoteLinkFlags;
    unsigned long long _constantConnectionOverhead;
    unsigned char _connectionType;
    int _priority;
    struct tagVCConnectionProtocolRealtimeVTable { void /* function */ *matchesSourceDestinationInfo; void /* function */ *sourceDestinationInfo; void /* function */ *isRelay; void /* function */ *equal; void /* function */ *isLocalOnCellular; void /* function */ *isRemoteOnCellular; void /* function */ *isIPv6; void /* function */ *localCellTech; void /* function */ *setLocalCellTech; void /* function */ *remoteCellTech; void /* function */ *setRemoteCellTech; void /* function */ *copyDescription; void /* function */ *isLocalOnWiFiOrWired; void /* function */ *isRemoteOnWiFiOrWired; void /* function */ *isLocalOnWiFi; void /* function */ *isRemoteOnWiFi; void /* function */ *isLocalOnWired; void /* function */ *isRemoteOnWired; void /* function */ *isOnSameInterfacesWithConnection; void /* function */ *isEndToEndLink; void /* function */ *connectionID; void /* function */ *isLocalExpensive; void /* function */ *isLocalConstrained; void /* function */ *isRemoteExpensive; void /* function */ *isRemoteConstrained; void /* function */ *reportingIPVersion; void /* function */ *reportingQRServerConfig; void /* function */ *reportingSliceStatus; void /* function */ *isHopByHopEncryptionSupported; } _vTable;
    NSDictionary *_connectionSelectionPriorities;
}

- (void)dealloc;
- (id)init;
- (void)setLinkFlags:(unsigned short)a0;
- (long long)compare:(id)a0 isPrimary:(char)a1 selectionPolicy:(struct { char x0; char x1; char x2; char x3; char x4; char x5; } *)a2;
- (long long)compareConnectionTypePriority:(id)a0 selectionPolicy:(struct { char x0; char x1; char x2; char x3; char x4; char x5; } *)a1;
- (long long)compareE2EPriority:(id)a0 selectionPolicy:(struct { char x0; char x1; char x2; char x3; char x4; char x5; } *)a1;
- (long long)compareInterfacePriority:(id)a0 isPrimary:(char)a1 preferWired:(char)a2;
- (long long)compareIpVersionPriority:(id)a0 selectionPolicy:(struct { char x0; char x1; char x2; char x3; char x4; char x5; } *)a1;
- (long long)compareVpnPriority:(id)a0 selectionPolicy:(struct { char x0; char x1; char x2; char x3; char x4; char x5; } *)a1;
- (id)getConnectionSelectionPriorities;
- (void)setRemoteLinkFlags:(unsigned short)a0;
- (void)setUpVTable;

@end
