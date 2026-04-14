@protocol UINSMenu;

@interface UINSHostMenu : NSMenu

@property (retain, nonatomic) id<UINSMenu> proxyMenu;

- (void).cxx_destruct;
- (id)initWithProxy:(id)a0;
- (id)initWithCoder:(id)a0;

@end
