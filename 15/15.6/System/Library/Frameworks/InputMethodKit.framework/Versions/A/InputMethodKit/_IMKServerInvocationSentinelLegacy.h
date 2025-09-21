@interface _IMKServerInvocationSentinelLegacy : NSObject {
    long long _int;
}

+ (id)sentinel;

- (void)dealloc;
- (id)init;
- (char)isMarkedDone;
- (void)markDone;

@end
