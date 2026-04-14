@interface NSScriptToOneRelationshipDescription : NSScriptAttributeDescription

- (BOOL)shouldBecomeAETEPropertyDeclaration;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1 className:(id)a2;
- (id)_descriptionWithTabCount:(unsigned long long)a0;

@end
