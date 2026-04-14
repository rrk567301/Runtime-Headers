@class NSWindow;

@interface SGTWindowEffect : NSObject

@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;
@property (readonly) NSWindow *window;

- (void)abort;
- (id)prepare;
- (void)invoke;
- (id)initWithWindow:(id)a0;
- (void)done;
- (void).cxx_destruct;

@end
