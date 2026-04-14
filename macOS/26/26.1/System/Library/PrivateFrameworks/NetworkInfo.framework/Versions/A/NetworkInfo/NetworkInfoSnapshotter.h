@class NSString, NSArray, NSError;

@interface NetworkInfoSnapshotter : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ dispatchQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)runWithWorkingDir:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
