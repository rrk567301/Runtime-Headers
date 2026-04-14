@interface StartPageContextMenuBuilder : NSObject

@property (copy, nonatomic) id /* block */ showMoreHandler;
@property (copy, nonatomic) id /* block */ showLessHandler;

- (void).cxx_destruct;
- (id)buildMenuIncludingTabGroupSections:(BOOL)a0;
- (void)_addToggleToMenu:(id)a0 fromData:(id)a1;

@end
