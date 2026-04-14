@interface BEAlertAction : NSObject

@property (nonatomic) int style;
@property (nonatomic) long long tag;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(int)a1 tag:(long long)a2 action:(id /* block */)a3;
- (void)doActionHandler;

@end
