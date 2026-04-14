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

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
