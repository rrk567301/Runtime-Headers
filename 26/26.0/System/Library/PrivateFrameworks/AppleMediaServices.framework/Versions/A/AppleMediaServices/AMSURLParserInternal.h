@class NSURL, NSError;
@protocol AMSBagProtocol;

@interface AMSURLParserInternal : NSObject

+ (void)typeFor:(NSURL *)a0 bag:(id<AMSBagProtocol>)a1 completionHandler:(void (^)(long long, NSError *))a2;

- (id)init;

@end
