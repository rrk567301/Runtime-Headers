@interface StartPageContextMenuBuilder : NSObject

@property (copy, nonatomic) id /* block */ showMoreHandler;
@property (copy, nonatomic) id /* block */ showLessHandler;

- (void).cxx_destruct;
- (id)buildMenu;

@end
