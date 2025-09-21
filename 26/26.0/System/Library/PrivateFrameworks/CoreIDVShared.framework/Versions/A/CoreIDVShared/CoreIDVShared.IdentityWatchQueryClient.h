@class NSError;

@interface CoreIDVShared.IdentityWatchQueryClient : NSObject <CoreIDVShared.IdentityWatchQueryProtocol> {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)watchIdentityPassesCountWithCompletionHandler:(void (^)(long long, NSError *))a0;

@end
