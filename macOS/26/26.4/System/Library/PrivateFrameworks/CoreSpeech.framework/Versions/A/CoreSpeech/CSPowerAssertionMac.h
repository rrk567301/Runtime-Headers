@interface CSPowerAssertionMac : NSObject {
    unsigned int _assertionID;
}

- (void)invalidate;
- (id)initWithTimeout:(double)a0;
- (void)dealloc;

@end
