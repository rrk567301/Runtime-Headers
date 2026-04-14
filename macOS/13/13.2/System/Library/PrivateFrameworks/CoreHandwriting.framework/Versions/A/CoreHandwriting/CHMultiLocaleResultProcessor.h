@interface CHMultiLocaleResultProcessor : NSObject

+ (void)updateMultiLocaleResultDictionary:(id)a0 locales:(id)a1;
+ (id)swapMultiLocaleResults:(id)a0 locales:(id)a1 topLocaleIndex:(long long)a2 resultHasSwap:(BOOL *)a3 resultTopLocale:(id *)a4;
+ (id)combineMultiLocaleResults:(id)a0 locales:(id)a1 topLocaleIndex:(long long)a2 mergedResultPostprocessingBlock:(id /* block */)a3 changeableColumnCountBlock:(id /* block */)a4;

@end
