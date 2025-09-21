@class NSPredicate;

@interface HMFHTTPRequestHandler : HMFObject

@property (readonly, copy, nonatomic) NSPredicate *methodPredicate;
@property (readonly, copy, nonatomic) NSPredicate *URLPredicate;
@property (readonly, copy, nonatomic) id /* block */ matchBlock;
@property (copy, nonatomic) id /* block */ requestBlock;

+ (char)_isValidMethodPrediate:(id)a0;
+ (char)_isValidURLPredicate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMethodPredicate:(id)a0 URLPredicate:(id)a1 matchBlock:(id /* block */)a2;

@end
