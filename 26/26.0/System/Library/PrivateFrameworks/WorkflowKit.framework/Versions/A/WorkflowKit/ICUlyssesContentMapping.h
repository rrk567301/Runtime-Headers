@interface ICUlyssesContentMapping : WFInterchangeContentMapping

- (id)contentItemClasses;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (BOOL)skipURLEncoding;
- (void)getImageURLQueryString:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (void)getTextRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (void)getTextURLQueryString:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;

@end
