@class NSDictionary;

@interface NWStatsTargetSelector : NSObject {
    char _hasExplicitTCP;
    char _explicitTCPValue;
    char _hasExplicitUDP;
    char _explicitUDPValue;
    char _hasExplicitUDPSubFlows;
    char _explicitUDPSubFlowsValue;
    char _hasExplicitChannels;
    char _explicitChannelsValue;
    char _hasExplicitSockets;
    char _explicitSocketsValue;
    char _hasExplicitQUIC;
    char _explicitQUICValue;
    char _hasExplicitUserlandConnections;
    char _explicitUserlandConnectionsValue;
    char _connHasNetAccess;
}

@property (retain) NSDictionary *suppliedParams;
@property unsigned long long filter;
@property unsigned long long connFilter;
@property unsigned long long events;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSelection:(id)a0;
- (char)_applySelection:(id)a0;
- (id)initWithMultipleSelections:(id)a0;
- (char)shouldAddProvider:(int)a0;

@end
