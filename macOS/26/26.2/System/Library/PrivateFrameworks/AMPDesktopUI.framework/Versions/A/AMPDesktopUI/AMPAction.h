@class NSArray;

@interface AMPAction : NSObject

@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL isValid;

- (BOOL)validateMenuItem:(id)a0;
- (id)title;
- (id)icon;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)createMenuItem;
- (void)executeWithCompletion:(id /* block */)a0;
- (void)doNSMenuItemAction:(id)a0;
- (id)keyShortcut;
- (unsigned long long)keyShortcutModifiers;

@end
