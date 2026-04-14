@interface IMKInputSessionInvocationSentinel : NSObject {
    long long _int;
}

+ (id)sentinel;

- (void)dealloc;
- (id)init;
- (void)markDone;
- (BOOL)isMarkedDone;

@end
