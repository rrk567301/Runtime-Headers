@protocol UINSMenu;

@interface UINSHostMenu : NSMenu

@property (retain, nonatomic) id<UINSMenu> proxyMenu;

- (id)initWithProxy:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
