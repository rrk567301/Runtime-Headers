@interface IDSRelayLinkProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (void).cxx_destruct;
- (void)setLocalCandidates:(id)a0;
- (void)setRemoteCandidates:(id)a0 withRelaySessionID:(id)a1;

@end
