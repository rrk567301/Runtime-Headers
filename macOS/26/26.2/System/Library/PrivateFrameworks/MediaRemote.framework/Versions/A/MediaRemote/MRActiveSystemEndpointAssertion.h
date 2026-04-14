@interface MRActiveSystemEndpointAssertion : NSObject {
    BOOL _valid;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)init;
- (void)releaseAssertion;
- (BOOL)acquireAssertion;
- (void)dealloc;
- (void)handleDidRestoreConnectionNotification:(id)a0;

@end
