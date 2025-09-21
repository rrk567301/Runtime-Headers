@class _BKSHIDEventAuthenticationKey;

@interface BKSHIDEventSimpleProvenanceOriginator : NSObject {
    _BKSHIDEventAuthenticationKey *_key;
}

- (void).cxx_destruct;
- (id)buildProvenance:(id /* block */)a0;
- (BOOL)verifyAuthentic:(id)a0;

@end
