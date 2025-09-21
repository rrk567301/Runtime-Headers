@class NSError;

@interface CoreIDVShared.IdentityProofingDataSharingClient : _TtCs12_SwiftObject <CoreIDVShared.IdentityProofingDataSharing> {
    void /* unknown type, empty encoding */ connection;
}

- (void)checkUserConsentWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
- (void)didChangeUserConsentWithStatus:(long long)a0 completionHandler:(void (^)(NSError *))a1;
- (void)fetchUserConsentWithCompletionHandler:(void (^)(long long, NSError *))a0;

@end
