@interface PMMTelephonyConnection : NSObject {
    struct __CTServerConnection { } *_ctServerConnnectionRef;
}

@property (readonly, nonatomic) char phoneCallActiveOrHeld;

- (void)dealloc;
- (id)init;

@end
