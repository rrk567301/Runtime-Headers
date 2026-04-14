@interface TIKeyEventMap_zh_Hant_Zhuyin_LiveConversion : TIKeyEventMap_zh_Hant_Zhuyin

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;

- (long long)candidateNumberKey:(int)a0;
- (BOOL)shouldInsertZhuyinCharacterAfter:(id)a0;

@end
