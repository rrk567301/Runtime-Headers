@protocol HAPStreamDelegate;

@interface HAPRelayStream : HMFObject

@property (weak) id<HAPStreamDelegate> delegate;
@property (readonly, nonatomic) unsigned long long mtu;

- (void)open;
- (void)close;
- (void).cxx_destruct;
- (id)writeData:(id)a0 error:(id *)a1;

@end
