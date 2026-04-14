@interface SymptomNetworkDiagnostics.NDFEventXPCPayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ eventType;
    void /* unknown type, empty encoding */ eventContext;
    void /* unknown type, empty encoding */ deviceID;
    void /* unknown type, empty encoding */ groupUUID;
    void /* unknown type, empty encoding */ eventUUID;
    void /* unknown type, empty encoding */ unresponsiveServers;
    void /* unknown type, empty encoding */ sameNetwork;
    void /* unknown type, empty encoding */ doubleNAT;
    void /* unknown type, empty encoding */ p2pTrafficBlocked;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
