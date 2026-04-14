@class NSWindow;

@interface SGTWindowEffect : NSObject

@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;
@property (readonly) NSWindow *window;

- (void)abort;
- (id)initWithWindow:(id)a0;
- (void)invoke;
- (void).cxx_destruct;
- (void)done;
- (id)prepare;

@end
