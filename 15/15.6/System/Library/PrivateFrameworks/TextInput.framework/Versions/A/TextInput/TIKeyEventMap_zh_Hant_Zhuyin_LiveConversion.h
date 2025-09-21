@interface TIKeyEventMap_zh_Hant_Zhuyin_LiveConversion : TIKeyEventMap_zh_Hant_Zhuyin

+ (id)sharedInstance;
+ (char)supportsSecureCoding;

- (long long)candidateNumberKey:(int)a0;
- (char)shouldInsertZhuyinCharacterAfter:(id)a0;

@end
