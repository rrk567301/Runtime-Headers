@interface IMKClientInvocationSentinel_Legacy : NSObject {
    long long _int;
}

+ (id)sentinel;

- (id)init;
- (void)dealloc;
- (BOOL)isMarkedDone;
- (void)markDone;

@end
