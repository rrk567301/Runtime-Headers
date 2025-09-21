@class NSString, NSArray, NSError;

@interface NetworkInfoSnapshotter : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ dispatchQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)runWithWorkingDir:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
