@interface ICUlyssesContentMapping : ICContentMapping

- (id)contentItemClasses;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (BOOL)skipURLEncoding;
- (void)getTextURLQueryString:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (void)getTextRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (void)getImageURLQueryString:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;

@end
