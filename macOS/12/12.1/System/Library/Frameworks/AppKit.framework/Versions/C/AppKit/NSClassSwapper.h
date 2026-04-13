@class NSString;

@interface NSClassSwapper : NSObject <NSCoding> {
    NSString *className;
    id template;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)className;
- (void)setTemplate:(id)a0;
- (id)_createControllerForCreator:(id /* block */)a0 coder:(id)a1;
- (id)_createControllerForStoryboardSegueTemplate:(id)a0 coder:(id)a1 segueSender:(id)a2 selectorPlaceholderIdentifier:(id)a3;
- (id)template;
- (void)setClassName:(id)a0;

@end
