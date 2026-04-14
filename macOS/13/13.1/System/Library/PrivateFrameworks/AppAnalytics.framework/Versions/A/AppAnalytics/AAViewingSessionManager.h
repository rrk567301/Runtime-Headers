@interface AAViewingSessionManager : NSObject <AAViewingSessionManagerType> {
    void /* unknown type, empty encoding */ sessions;
    void /* unknown type, empty encoding */ activeSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)viewingSessionForContentIdentifier:(id)a0 object:(id)a1 onEnd:(id /* block */)a2;
- (void)removeObject:(id)a0 forContentIdentifier:(id)a1;
- (void)endViewingSessionForContentIdentifier:(id)a0;
- (void)endActiveViewingSession;

@end
