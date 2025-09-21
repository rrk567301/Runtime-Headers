@interface ICCommaSeparatedStringsContentMapping : ICContentMapping

- (char)supportsMultipleItems;
- (id)contentItemClasses;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (id)allowedCharacterSet;
- (char)skipURLEncoding;
- (id)escapedCharacters;

@end
