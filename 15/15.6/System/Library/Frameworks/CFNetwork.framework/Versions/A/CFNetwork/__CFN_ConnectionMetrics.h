@class NSString, NSDictionary, NSUUID, NSObject;
@protocol OS_nw_connection, OS_nw_establishment_report, OS_nw_endpoint;

@interface __CFN_ConnectionMetrics : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
    char _needsCachedTCPInfoAtEnd;
    char _needsCachedSubflowCounts;
    char _TLSConfigured;
    char _cellular;
    char _expensive;
    char _constrained;
    char _multipath;
    char _usedTFO;
    char _isUnlistedTracker;
    char _reusedAfterAPSleepWake;
    char _apSleepWakeMonitored;
    char _usedByTransaction;
    char _coalesced;
    char _discretionary;
    char _dataBudgetingEnabled;
    unsigned short _negotiatedTLSProtocolVersion;
    unsigned short _negotiatedTLSCipherSuite;
    int _privacyStance;
    NSObject<OS_nw_connection> *_connection;
    NSDictionary *_cachedTCPInfoAtEnd;
    NSDictionary *_cachedSubflowCounts;
    NSUUID *_UUID;
    unsigned long long _identifier;
    NSUUID *_initiatingTransactionID;
    double _beginTime;
    double _establishTime;
    double _firstByteReceivedTime;
    double _endTime;
    NSObject<OS_nw_endpoint> *_endpoint;
    long long _http3DiscoveryStatus;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_endpoint> *_remoteEndpoint;
    NSString *_interfaceName;
    NSString *_networkProtocolName;
    NSObject<OS_nw_establishment_report> *_establishmentReport;
    double _idleAtTime;
    struct weak_ptr<TransportConnection> { struct TransportConnection *__ptr_; struct __shared_weak_count *__cntrl_; } _transportConnection;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double _daemon_establishTime;
@property (readonly, copy, nonatomic) NSString *_daemon_interfaceName;
@property (readonly, nonatomic, getter=_daemon_isDiscretionary) char _daemon_discretionary;
@property (readonly, nonatomic, getter=_daemon_isDataBudgetingEnabled) char _daemon_dataBudgetingEnabled;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
