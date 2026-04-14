@class NSString;

@interface WPLinkFilteringRule : NSObject

@property (readonly, nonatomic) NSString *queryParameter;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *path;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryParameter:(id)a0 domain:(id)a1 path:(id)a2;

@end
