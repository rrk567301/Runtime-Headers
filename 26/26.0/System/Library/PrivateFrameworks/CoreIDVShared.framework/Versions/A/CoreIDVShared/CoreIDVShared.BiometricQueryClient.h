@class NSArray, NSError;

@interface CoreIDVShared.BiometricQueryClient : NSObject <CoreIDVShared.BiometricQueryProtocol> {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)globalAuthACLTemplateUUIDsWithCompletionHandler:(void (^)(NSArray *, long long, NSError *))a0;

@end
