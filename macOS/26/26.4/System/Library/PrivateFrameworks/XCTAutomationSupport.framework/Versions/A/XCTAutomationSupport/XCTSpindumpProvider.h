@class NSData, NSError;

@interface XCTSpindumpProvider : SwiftNativeNSObject <XCTSpindumpProviding> {
    void /* unknown type, empty encoding */ specification;
    void /* unknown type, empty encoding */ spindumpFunction;
}

- (id)initWithSpecification:(id)a0;
- (id)init;
- (void)executeWithCompletionHandler:(void (^)(NSData *, NSError *))a0;

@end
