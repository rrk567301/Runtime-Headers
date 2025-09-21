@interface CMProxPDPAndALSPhoneManager : NSObject

@property (readonly, nonatomic) id _internal;

+ (char)isAvailable;

- (void)dealloc;
- (id)init;
- (void)startALSPhoneUpdatesWithHandler:(id /* block */)a0;
- (void)startPDPUpdatesWithHandler:(id /* block */)a0;

@end
