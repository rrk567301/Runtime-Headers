@class NSString, NSArray;

@interface SKDLocationResolutionContext : SKDModelContext

@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSArray *territories;

- (void).cxx_destruct;
- (id)initWithResourcePath:(id)a0 territories:(id)a1;

@end
