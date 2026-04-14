@interface AAUserIDStorage : NSObject {
    void /* unknown type, empty encoding */ storage;
}

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccessGroup:(id)a0;
- (id)initWithAccessGroup:(id)a0 legacyStorage:(id)a1;
- (id)initWithAccessGroup:(id)a0 legacyStorage:(id)a1 syncRequiresDiagnosticConsent:(BOOL)a2 syncRequiresTrackingConsent:(BOOL)a3;
- (id)initWithAccessGroup:(id)a0 syncRequiresDiagnosticConsent:(BOOL)a1 syncRequiresTrackingConsent:(BOOL)a2;
- (id)initWithNewStorage:(id)a0 legacyStorage:(id)a1;

@end
