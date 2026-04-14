@interface PXMenuSymbolProvider : NSObject

+ (id)_symbolTitleForSymbolType:(long long)a0;
+ (id)imageForSymbolType:(long long)a0;
+ (id)menuItemWithTitle:(id)a0 action:(SEL)a1 symbolType:(long long)a2;
+ (id)menuItemWithTitle:(id)a0 action:(SEL)a1 symbolType:(long long)a2 keyEquivalent:(id)a3;

@end
