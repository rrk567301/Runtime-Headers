@interface MRActiveSystemEndpointAssertion : NSObject {
    BOOL _valid;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)init;
- (BOOL)acquireAssertion;
- (void)dealloc;
- (void)releaseAssertion;
- (void)handleDidRestoreConnectionNotification:(id)a0;

@end
