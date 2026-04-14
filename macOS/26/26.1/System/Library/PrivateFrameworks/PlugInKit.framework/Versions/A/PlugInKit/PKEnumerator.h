@class NSEnumerator;

@interface PKEnumerator : NSEnumerator

@property (class, readonly, nonatomic) id /* block */ defaultFilter;

@property (readonly, nonatomic) NSEnumerator *underlyingEnumerator;
@property (copy, nonatomic) id /* block */ filter;

- (id)nextObject;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNSEnumerator:(id)a0;

@end
