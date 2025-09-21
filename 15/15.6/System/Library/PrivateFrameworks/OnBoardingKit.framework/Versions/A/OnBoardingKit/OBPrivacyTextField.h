@interface OBPrivacyTextField : NSTextField

@property char shouldBlockContextMenu;

- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(unsigned long long)a3;

@end
