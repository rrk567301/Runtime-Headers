@interface _NSTextAttributeStorage : _NSTextRunStorage

- (char)_attributesInTextRange:(id)a0 areEqualToAttributes:(id)a1;
- (char)_setAttributes:(id)a0 forTextRange:(id)a1 checkForChange:(char)a2;
- (char)addAttribute:(id)a0 value:(id)a1 forTextRange:(id)a2;
- (void)enumerateAttributesFromLocation:(id)a0 reverse:(char)a1 usingBlock:(id /* block */)a2;
- (char)removeAttribute:(id)a0 forTextRange:(id)a1;
- (char)setAttribute:(id)a0 value:(id)a1 forTextRange:(id)a2;
- (char)setAttributes:(id)a0 forTextRange:(id)a1;

@end
