@interface AXSSDocumentTextRuleCapitals : AXSSDocumentTextRule

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)checkSpelledCorrectly:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 includeAutocorrect:(char)a1;
- (id)issuesForWord:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 previousWord:(id)a2 previousWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inText:(id)a4 ignoreRuleUntilIndex:(long long *)a5;

@end
