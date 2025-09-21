@class NSString, NSError;

@interface CoreIDV.IdentityProofingSession : NSObject <CoreIDV.IdentityProofingXPCProtocol> {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelProofingWithState:(NSString *)a0 country:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;

@end
