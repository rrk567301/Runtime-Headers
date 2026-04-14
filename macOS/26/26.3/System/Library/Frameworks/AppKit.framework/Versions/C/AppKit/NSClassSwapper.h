@class NSString;

@interface NSClassSwapper : NSObject <NSCoding> {
    NSString *className;
    id template;
}

+ (void)initialize;

- (id)className;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setClassName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_controllerForCreator:(id /* block */)a0 coder:(id)a1;
- (id)_controllerForStoryboardSegueTemplate:(id)a0 coder:(id)a1 segueSender:(id)a2 selectorPlaceholderIdentifier:(id)a3;
- (void)setTemplate:(id)a0;
- (id)template;

@end
