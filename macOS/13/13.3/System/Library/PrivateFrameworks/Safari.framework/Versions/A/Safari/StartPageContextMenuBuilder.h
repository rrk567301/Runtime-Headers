@interface StartPageContextMenuBuilder : NSObject

@property (copy, nonatomic) id /* block */ showMoreHandler;
@property (copy, nonatomic) id /* block */ showLessHandler;

- (void).cxx_destruct;
- (void)_addToggleToMenu:(id)a0 fromData:(id)a1;
- (id)buildMenuIncludingTabGroupSections:(BOOL)a0;

@end
