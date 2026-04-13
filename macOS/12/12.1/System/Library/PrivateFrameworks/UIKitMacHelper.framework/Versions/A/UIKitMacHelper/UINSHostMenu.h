@protocol UINSMenu;

@interface UINSHostMenu : NSMenu

@property (weak, nonatomic) id<UINSMenu> proxyMenu;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProxy:(id)a0;

@end
