@interface WFWebPageToFilterText : WFWebPageDecorator

- (id)URLFuzzyForFilter;
- (id)URLFuzzyWithWordLength:(int)a0;
- (char)isWorthAnalyzingWithEvidence:(int *)a0 message:(id *)a1;
- (id)rawPlainText;
- (char)selfRestricted;

@end
