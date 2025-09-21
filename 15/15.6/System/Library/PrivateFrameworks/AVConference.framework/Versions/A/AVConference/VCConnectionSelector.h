@class NSArray;
@protocol VCConnectionProtocol;

@interface VCConnectionSelector : NSObject {
    id<VCConnectionProtocol> _primaryConnection;
    char _isMultiwaySession;
    struct { char preferRelayOverP2P; char preferIPv6OverIPv4; char preferNonVPN; char e2eCriteriaEnabled; char preferE2E; char preferWired; } _connectionSelectionPolicy;
    struct { id<VCConnectionProtocol> primaryConnection; id<VCConnectionProtocol> secondaryConnection; } _endToEndLinks;
}

@property (retain, nonatomic) id<VCConnectionProtocol> secondaryConnection;
@property (retain, nonatomic) id<VCConnectionProtocol> lastPrimaryConnectionInUse;
@property (retain, nonatomic) id<VCConnectionProtocol> connectionForDuplication;
@property (retain, nonatomic) id<VCConnectionProtocol> connectionForDuplicationNonProbingVersion;
@property (copy, nonatomic) NSArray *linkPreferenceOrder;
@property (readonly) struct { id<VCConnectionProtocol> primaryConnection; id<VCConnectionProtocol> secondaryConnection; } serverLinks;
@property char canUseP2PLinks;

- (void)dealloc;
- (id)connectionForGroupType:(unsigned char)a0 isPrimary:(char)a1;
- (struct { char x0; char x1; char x2; char x3; char x4; char x5; } *)getConnectionSelectionPolicy;
- (id)initWithMultiwayEnabled:(char)a0;
- (char)isPrimaryConnectionSameAsConnection:(id)a0;
- (void)selectConnectionForGroupType:(unsigned char)a0 fromConnectionArray:(id)a1 asPrimary:(char)a2;
- (char)selectPrimaryAndSecondaryWithConnection:(id)a0 isEndToEnd:(char)a1;
- (void)updateConnectionSelectionPolicy:(struct { char x0; char x1; char x2; char x3; char x4; char x5; } *)a0;
- (void)updateConnectionSelectionPolicyWithPreferRelayOverP2P:(char)a0 preferNonVPN:(char)a1 preferE2E:(char)a2;
- (void)updatePrimaryWithConnection:(id)a0;
- (void)updateSecondaryWithConnection:(id)a0;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)a0 connectionAdded:(id)a1;
- (void)updateSelectedConnectionsForGroupType:(unsigned char)a0 connectionRemoved:(id)a1 connectionArray:(id)a2;
- (void)useConnectionAsPrimary:(id)a0;

@end
