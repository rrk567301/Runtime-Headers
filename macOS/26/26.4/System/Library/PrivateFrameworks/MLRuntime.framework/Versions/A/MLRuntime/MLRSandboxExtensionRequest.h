@class NSArray;

@interface MLRSandboxExtensionRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) BOOL requireWrite;

- (void).cxx_destruct;
- (id)description;
- (id)initWithURLs:(id)a0 requireWrite:(BOOL)a1;

@end
