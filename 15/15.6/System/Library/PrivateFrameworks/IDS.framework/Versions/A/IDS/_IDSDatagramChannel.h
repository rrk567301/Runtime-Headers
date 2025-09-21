@class NSMutableArray, NSMutableDictionary, NSData, IDSDataChannelsDirectConnections, NSObject, IDSDataChannelLinkContext;
@protocol OS_nw_path_evaluator, OS_nw_context, OS_nw_connection, OS_dispatch_queue;

@interface _IDSDatagramChannel : NSObject {
    char _verboseFunctionalLogging;
    int _socketDescriptor;
    id /* block */ _eventHandler;
    id /* block */ _readHandler;
    id /* block */ _readHandlerWithOptions;
    id /* block */ _writeHandler;
    char _connected;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _linkContextsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _linkIDToParticipantMapLock;
    char _isInvalidated;
    long long _operationMode;
    long long _preferredDataPathType;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_context> *_context;
    NSObject<OS_dispatch_queue> *_queue;
    char _hasMetadata;
    char _sentFirstReadLinkInfo;
    char _receivedPreConnectionData;
    char _waitForPreConnectionDataForConnected;
    char _startCalled;
    char _hasSentCompoundPacket;
    char _startAutomatically;
    int _osChannelFD;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    struct channel { } *_osChannel;
    struct channel_ring_desc { } *_osChannelTXRing;
    struct channel_ring_desc { } *_osChannelRXRing;
    unsigned char _nexus_instance[16];
    IDSDataChannelLinkContext *_cellularLink;
    NSMutableDictionary *_linkContexts;
    char _defaultLinkID;
    NSData *_preConnectionData;
    NSMutableArray *_sendingMetadata;
    char _needsMediaEncryptionInfo;
    unsigned long long _outgoingBytes;
    unsigned long long _pendingOutgoingBytes;
    unsigned long long _incomingBytes;
    unsigned long long _outgoingPackets;
    unsigned long long _pendingOutgoingPackets;
    unsigned long long _incomingPackets;
    double _lastOutgoingStatReport;
    double _lastPendingOutgoingStatReport;
    double _lastIncomingStatReport;
    NSMutableDictionary *_MKIArrivalTime;
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;
    NSMutableDictionary *_probingDict;
    IDSDataChannelsDirectConnections *_directConnectionsByLinkID[256];
    IDSDataChannelLinkContext *_linkContextsByLinkID[256];
    NSMutableDictionary *_linkIDToParticipantMap;
    NSMutableDictionary *_localRemoteRelayLinkIDToVirtualLinkIDMap;
}

- (id)init;
- (void).cxx_destruct;

@end
