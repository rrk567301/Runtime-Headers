@class NSDictionary, NSArray;

@interface IDSToolSwiftBridge : NSObject

@property (class, nonatomic, readonly) IDSToolSwiftBridge *shared;
@property (class, nonatomic, readonly) NSDictionary *commandAbstractsByName;

@property (nonatomic, weak) void /* function */ delegate;

- (id)init;
- (void).cxx_destruct;
- (id)help:(id)a0;
- (void)run:(NSArray *)a0 completionHandler:(void (^)(int))a1;

@end
