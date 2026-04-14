@interface CSPowerAssertionMac : NSObject {
    unsigned int _assertionID;
}

- (void)invalidate;
- (void)dealloc;
- (id)initWithTimeout:(double)a0;

@end
