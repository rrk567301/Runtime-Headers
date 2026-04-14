@class NSString, WBSStartPageSectionManager;

@interface StartPageContextMenuBuilder : NSObject {
    NSString *_profileIdentifier;
    WBSStartPageSectionManager *_startPageSectionManager;
}

@property (copy, nonatomic) id /* block */ showMoreHandler;
@property (copy, nonatomic) id /* block */ showLessHandler;

- (void).cxx_destruct;
- (void)_addToggleToMenu:(id)a0 fromData:(id)a1;
- (id)buildMenuIncludingTabGroupSections:(BOOL)a0 forProfileWithIdentifier:(id)a1 withStartPageSectionManager:(id)a2;

@end
