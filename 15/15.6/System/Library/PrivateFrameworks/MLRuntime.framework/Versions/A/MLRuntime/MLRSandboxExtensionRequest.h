@class NSArray;

@interface MLRSandboxExtensionRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) char requireWrite;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURLs:(id)a0 requireWrite:(char)a1;

@end
