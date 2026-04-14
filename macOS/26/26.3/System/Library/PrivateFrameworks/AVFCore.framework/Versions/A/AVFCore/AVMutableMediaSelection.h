@interface AVMutableMediaSelection : AVMediaSelection

- (BOOL)_isValidMediaSelectionOption:(id)a0 forMediaSelectionGroup:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_validatedGroupIdentifierKey:(id)a0;
- (void)selectMediaOption:(id)a0 inMediaSelectionGroup:(id)a1;

@end
