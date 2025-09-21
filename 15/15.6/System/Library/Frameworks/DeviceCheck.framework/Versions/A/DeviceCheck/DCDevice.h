@interface DCDevice : NSObject

@property (class, readonly) DCDevice *currentDevice;

@property (readonly, getter=isSupported) char supported;

- (char)_isSupportedReturningError:(id *)a0;
- (void)generateTokenWithCompletionHandler:(id /* block */)a0;

@end
