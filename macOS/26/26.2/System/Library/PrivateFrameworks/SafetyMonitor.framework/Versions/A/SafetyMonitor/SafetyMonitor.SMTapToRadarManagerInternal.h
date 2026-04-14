@class NSError, NSString;

@interface SafetyMonitor.SMTapToRadarManagerInternal : NSObject {
    void /* unknown type, empty encoding */ urlComponents;
}

+ (void)fileRadarWithError:(NSError *)a0 conversationIdentifier:(NSString *)a1 completionHandler:(void (^)(void))a2;
+ (void)fileRadarWithTitle:(NSString *)a0 description:(NSString *)a1 conversationIdentifier:(NSString *)a2 completionHandler:(void (^)(void))a3;

- (void).cxx_destruct;
- (id)init;

@end
