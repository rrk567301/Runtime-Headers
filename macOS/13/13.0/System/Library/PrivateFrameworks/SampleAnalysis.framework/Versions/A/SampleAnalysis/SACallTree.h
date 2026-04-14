@class NSArray;

@interface SACallTree : NSObject

@property (readonly) NSArray *rootObjects;
@property (readonly) NSArray *rootFrames;

- (void).cxx_destruct;
- (id)initWithRootObjects:(id)a0;
- (void)enumerateCallTreeFrames:(id /* block */)a0;

@end
