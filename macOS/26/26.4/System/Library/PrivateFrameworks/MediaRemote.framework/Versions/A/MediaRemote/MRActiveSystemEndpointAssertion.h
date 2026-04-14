@interface MRActiveSystemEndpointAssertion : NSObject {
    BOOL _valid;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)releaseAssertion;
- (BOOL)acquireAssertion;
- (id)init;
- (void)dealloc;
- (void)handleDidRestoreConnectionNotification:(id)a0;

@end
