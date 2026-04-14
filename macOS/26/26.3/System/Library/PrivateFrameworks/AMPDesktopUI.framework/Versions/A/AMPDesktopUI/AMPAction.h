@class NSArray;

@interface AMPAction : NSObject

@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL isValid;

- (id)initWithItems:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (id)icon;
- (id)createMenuItem;
- (void)executeWithCompletion:(id /* block */)a0;
- (void)doNSMenuItemAction:(id)a0;
- (id)keyShortcut;
- (unsigned long long)keyShortcutModifiers;

@end
