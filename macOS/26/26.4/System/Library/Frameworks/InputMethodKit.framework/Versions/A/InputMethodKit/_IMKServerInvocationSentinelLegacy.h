@interface _IMKServerInvocationSentinelLegacy : NSObject {
    long long _int;
}

+ (id)sentinel;

- (id)init;
- (void)dealloc;
- (BOOL)isMarkedDone;
- (void)markDone;

@end
