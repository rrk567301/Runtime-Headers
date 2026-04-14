@class NSWindow;

@interface SGTWindowEffect : NSObject

@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;
@property (readonly) NSWindow *window;

- (void)done;
- (void)invoke;
- (void)abort;
- (id)prepare;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;

@end
