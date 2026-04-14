@class NSEnumerator;

@interface PKEnumerator : NSEnumerator

@property (class, readonly, nonatomic) id /* block */ defaultFilter;

@property (readonly, nonatomic) NSEnumerator *underlyingEnumerator;
@property (copy, nonatomic) id /* block */ filter;

- (id)nextObject;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNSEnumerator:(id)a0;

@end
