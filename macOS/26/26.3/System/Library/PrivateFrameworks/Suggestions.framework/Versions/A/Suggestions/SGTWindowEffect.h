@class NSWindow;

@interface SGTWindowEffect : NSObject

@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;
@property (readonly) NSWindow *window;

- (void)abort;
- (void)invoke;
- (id)prepare;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)done;

@end
