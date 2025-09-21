@interface _EAREditDistance : NSObject

- (void)editAlignmentWithRefText:(id)a0 hypText:(id)a1 placeholderSymbol:(id)a2 caseInsensitive:(char)a3 removeWordSense:(char)a4 completion:(id /* block */)a5;
- (void)editAlignmentWithRefTokens:(id)a0 hypTokens:(id)a1 placeholderSymbol:(id)a2 caseInsensitive:(char)a3 removeWordSense:(char)a4 completion:(id /* block */)a5;
- (id)editDistanceWithRefText:(id)a0 hypText:(id)a1 caseInsensitive:(char)a2 removeWordSense:(char)a3;
- (id)editDistanceWithRefTokens:(id)a0 hypTokens:(id)a1 caseInsensitive:(char)a2 removeWordSense:(char)a3;

@end
