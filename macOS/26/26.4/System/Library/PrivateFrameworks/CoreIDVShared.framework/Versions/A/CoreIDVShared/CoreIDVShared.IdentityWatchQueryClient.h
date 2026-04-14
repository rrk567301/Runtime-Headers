@class NSError;

@interface CoreIDVShared.IdentityWatchQueryClient : NSObject <CoreIDVShared.IdentityWatchQueryProtocol> {
    void /* unknown type, empty encoding */ connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)watchIdentityPassesCountWithCompletionHandler:(void (^)(long long, NSError *))a0;

@end
