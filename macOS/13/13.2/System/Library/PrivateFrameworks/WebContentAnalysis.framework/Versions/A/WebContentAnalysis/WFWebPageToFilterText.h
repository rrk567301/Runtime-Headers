@interface WFWebPageToFilterText : WFWebPageDecorator

- (id)rawPlainText;
- (BOOL)isWorthAnalyzingWithEvidence:(int *)a0 message:(id *)a1;
- (BOOL)selfRestricted;
- (id)URLFuzzyWithWordLength:(int)a0;
- (id)URLFuzzyForFilter;

@end
