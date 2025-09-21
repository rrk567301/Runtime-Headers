@class NSWindow;

@interface SGTWindowEffect : NSObject

@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;
@property (readonly) NSWindow *window;

- (void)invoke;
- (void)abort;
- (void)done;
- (id)initWithWindow:(id)a0;
- (id)prepare;
- (void).cxx_destruct;

@end
