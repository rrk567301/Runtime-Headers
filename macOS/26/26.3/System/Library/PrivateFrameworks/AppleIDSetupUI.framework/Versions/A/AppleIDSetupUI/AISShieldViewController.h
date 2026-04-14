@class AISShieldFlowContext;

@interface AISShieldViewController : NSViewController

@property (nonatomic, retain) AISShieldFlowContext *context;
@property (nonatomic, weak) void /* function */ delegate;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithShieldFlowContext:(id)a0;

@end
