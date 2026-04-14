@class NSString;

@interface _PXToastAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 action:(id /* block */)a1;

@end
