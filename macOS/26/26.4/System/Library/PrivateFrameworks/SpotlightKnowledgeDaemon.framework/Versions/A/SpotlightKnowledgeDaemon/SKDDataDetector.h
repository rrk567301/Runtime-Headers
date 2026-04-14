@interface SKDDataDetector : SKDModel

- (id)linkFromResult:(id)a0;
- (id)addressFromResult:(id)a0;
- (id)dateFromResult:(id)a0 referenceDate:(id)a1 referenceTimezone:(id)a2;
- (id)emailFromResult:(id)a0;
- (void)enumerateResultsWithInputs:(id)a0 options:(id)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)phoneNumberFromResult:(id)a0;

@end
